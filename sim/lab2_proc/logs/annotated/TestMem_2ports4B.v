//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Memory
        //========================================================================
        // This is dual-ported test memory that handles a limited subset of
        // memory request messages and returns memory response messages.
        
        `ifndef VC_TEST_MEM_2PORTS4B_V
        `define VC_TEST_MEM_2PORTS4B_V
        
        `include "vc/mem-msgs.v"
        `include "vc/queues.v"
        `include "vc/assert.v"
        `include "vc/trace.v"
        module vc_MemReqMsgUnpack#(
          parameter p_opaque_nbits ,
          parameter p_addr_nbits,
          parameter p_data_nbits,
          parameter c_req_nbits  = $bits(mem_req_4B_t),
          parameter c_req_type_nbits    = 3,
          parameter c_req_opaque_nbits  = p_opaque_nbits,
          parameter c_req_addr_nbits    = p_addr_nbits,
          parameter c_req_len_nbits     = 2,
          parameter c_req_data_nbits    = p_data_nbits
          ) 
          (
 000575     input logic [c_req_nbits-1:0] msg,
%000000     output logic [c_req_type_nbits-1:0] type_ ,
%000000     output logic [c_req_opaque_nbits-1:0] opaque ,
 000006     output logic [c_req_addr_nbits-1:0] addr ,
%000000     output logic [c_req_len_nbits-1:0] len ,
 000575     output logic [c_req_data_nbits-1:0] data 
          );
          typedef struct packed {
            logic [c_req_type_nbits-1:0] type_;
            logic [c_req_opaque_nbits-1:0] opaque;
            logic [c_req_addr_nbits-1:0] addr;
            logic [c_req_len_nbits-1:0] len; 
            logic [c_req_data_nbits-1:0] data ;
          } mem_req; 
%000000  mem_req req;
         assign req=msg ;
         assign type_=req.type_;
         assign opaque=req.opaque;
         assign addr=req.addr;
         assign len=req.len;
         assign data=req.data;
         
        
        endmodule
        
        module vc_MemRespMsgPack#(
          parameter p_opaque_nbits ,
          parameter p_addr_nbits,
          parameter p_data_nbits,
          parameter c_resp_nbits  = $bits(mem_resp_4B_t),
          parameter c_resp_type_nbits    = 3,
          parameter c_resp_opaque_nbits  = p_opaque_nbits,
          parameter c_resp_addr_nbits    = p_addr_nbits,
          parameter c_resp_len_nbits     = 2,
          parameter c_resp_data_nbits    = p_data_nbits
          ) 
          (
 001758     output logic [c_resp_nbits-1:0] msg,
%000000     input logic [c_resp_type_nbits-1:0] type_ ,
%000000     input logic [c_resp_opaque_nbits-1:0] opaque ,
%000000     input logic [c_resp_len_nbits-1:0] len ,
 000864     input logic [c_resp_data_nbits-1:0] data ,
%000000     input logic [1:0] test
          );
            typedef struct packed {
            logic [c_resp_type_nbits-1:0] type_;
            logic [c_resp_opaque_nbits-1:0] opaque;
            logic [1:0] test;
            logic [c_resp_len_nbits-1:0] len; 
            logic [c_resp_data_nbits-1:0] data ;
          } mem_resp;
%000000   mem_resp resp; 
         assign msg=resp;
         assign resp.type_=type_;
         assign resp.opaque=opaque;
         assign resp.len=len;
         assign resp.data=data;
        endmodule
        
        //------------------------------------------------------------------------
        // Test memory with two req/resp ports
        //------------------------------------------------------------------------
        
        module vc_TestMem_2ports4B
        #(
          parameter p_mem_nbytes   = 1024, // size of physical memory in bytes
          parameter p_opaque_nbits = 8,    // mem message opaque field num bits
          parameter p_addr_nbits   = 32,   // mem message address num bits
          parameter p_data_nbits   = 32,   // mem message data num bits
        
          // Shorter names for message type, not to be set from outside the module
          parameter o = p_opaque_nbits,
          parameter a = p_addr_nbits,
          parameter d = p_data_nbits,
        
          // Local constants not meant to be set from outside the module
          parameter c_req_nbits  = $bits(mem_req_4B_t),
          parameter c_resp_nbits = $bits(mem_resp_4B_t)
        )(
 037611   input  logic                    clk,
 000039   input  logic                    reset,
        
          // clears the content of memory
 000039   input  logic                    mem_clear,
        
          // Memory request port 0 interface
        
 009122   input  logic                    memreq0_val,
 000098   output logic                    memreq0_rdy,
%000000   input  logic [c_req_nbits-1:0]  memreq0_msg,
        
          // Memory request port 1 interface
        
 003508   input  logic                    memreq1_val,
%000000   output logic                    memreq1_rdy,
 000682   input  logic [c_req_nbits-1:0]  memreq1_msg,
        
          // Memory response port 0 interface
        
 006735   output logic                    memresp0_val,
 009277   input  logic                    memresp0_rdy,
 000900   output logic [c_resp_nbits-1:0] memresp0_msg,
        
          // Memory response port 1 interface
        
 003352   output logic                    memresp1_val,
 003646   input  logic                    memresp1_rdy,
 000816   output logic [c_resp_nbits-1:0] memresp1_msg
        );
        
          //----------------------------------------------------------------------
          // Local parameters
          //----------------------------------------------------------------------
        
          // Size of a physical address for the memory in bits
        
          localparam c_physical_addr_nbits = $clog2(p_mem_nbytes);
        
          // Size of data entry in bytes
        
          localparam c_data_byte_nbits = (p_data_nbits/8);
        
          // Number of data entries in memory
        
          localparam c_num_blocks = p_mem_nbytes/c_data_byte_nbits;
        
          // Size of block address in bits
        
          localparam c_physical_block_addr_nbits = $clog2(c_num_blocks);
        
          // Size of block offset in bits
        
          localparam c_block_offset_nbits = $clog2(c_data_byte_nbits);
        
          // Shorthand for the message types
        
          localparam c_read       = `VC_MEM_REQ_MSG_TYPE_READ;
          localparam c_write      = `VC_MEM_REQ_MSG_TYPE_WRITE;
          localparam c_write_init = `VC_MEM_REQ_MSG_TYPE_WRITE_INIT;
          localparam c_amo_add    = `VC_MEM_REQ_MSG_TYPE_AMO_ADD;
          localparam c_amo_and    = `VC_MEM_REQ_MSG_TYPE_AMO_AND;
          localparam c_amo_or     = `VC_MEM_REQ_MSG_TYPE_AMO_OR;
        
          // Shorthand for the message field sizes
        
          localparam c_req_type_nbits    = 3;
          localparam c_req_opaque_nbits  = o;
          localparam c_req_addr_nbits    = a;
          localparam c_req_len_nbits     = 2;
          localparam c_req_data_nbits    = d;
        
          localparam c_resp_type_nbits   = 3;
          localparam c_resp_opaque_nbits = o;
          localparam c_resp_len_nbits    = 2;
          localparam c_resp_data_nbits   = d;
        
          //----------------------------------------------------------------------
          // Memory request buffers
          //----------------------------------------------------------------------
          // We use pipe queues here since in general we want our larger modules
          // to use registered inputs, but we want to reduce the overhead of
          // having two elements which would be required for full throughput with
          // normal queues. By using a pipe queues at the inputs and a bypass
          // queue at the output we cut and combinational paths through the test
          // memory (helping to avoid combinational loops) and also preserve our
          // registered input policy.
        
 009070   logic                   memreq0_val_M;
 006147   logic                   memreq0_rdy_M;
%000000   logic [c_req_nbits-1:0] memreq0_msg_M;
        
          vc_Queue
          #(
            .p_type      (`VC_QUEUE_PIPE),
            .p_msg_nbits (c_req_nbits),
            .p_num_msgs  (1)
          )
          memreq0_queue
          (
            .clk     (clk),
            .reset   (reset),
            .enq_val (memreq0_val),
            .enq_rdy (memreq0_rdy),
            .enq_msg (memreq0_msg),
            .deq_val (memreq0_val_M),
            .deq_rdy (memreq0_rdy_M),
            .deq_msg (memreq0_msg_M),
            .num_free_entries()
          );
        
 003508   logic                   memreq1_val_M;
 001956   logic                   memreq1_rdy_M;
 000575   logic [c_req_nbits-1:0] memreq1_msg_M;
        
          vc_Queue
          #(
            .p_type      (`VC_QUEUE_PIPE),
            .p_msg_nbits (c_req_nbits),
            .p_num_msgs  (1)
          )
          memreq1_queue
          (
            .clk     (clk),
            .reset   (reset),
            .enq_val (memreq1_val),
            .enq_rdy (memreq1_rdy),
            .enq_msg (memreq1_msg),
            .deq_val (memreq1_val_M),
            .deq_rdy (memreq1_rdy_M),
            .deq_msg (memreq1_msg_M),
            .num_free_entries()
          );
        
          //----------------------------------------------------------------------
          // Unpack the request messages
          //----------------------------------------------------------------------
        
%000000   logic [c_req_type_nbits-1:0]   memreq0_msg_type_M;
%000000   logic [c_req_opaque_nbits-1:0] memreq0_msg_opaque_M;
 000039   logic [c_req_addr_nbits-1:0]   memreq0_msg_addr_M;
%000000   logic [c_req_len_nbits-1:0]    memreq0_msg_len_M;
%000000   logic [c_req_data_nbits-1:0]   memreq0_msg_data_M;
        
          vc_MemReqMsgUnpack#(o,a,d) memreq0_msg_unpack
          (
            .msg    (memreq0_msg_M),
            .type_  (memreq0_msg_type_M),
            .opaque (memreq0_msg_opaque_M),
            .addr   (memreq0_msg_addr_M),
            .len    (memreq0_msg_len_M),
            .data   (memreq0_msg_data_M)
          );
        
%000000   logic [c_req_type_nbits-1:0]   memreq1_msg_type_M;
%000000   logic [c_req_opaque_nbits-1:0] memreq1_msg_opaque_M;
%000000   logic [c_req_addr_nbits-1:0]   memreq1_msg_addr_M;
%000000   logic [c_req_len_nbits-1:0]    memreq1_msg_len_M;
 000575   logic [c_req_data_nbits-1:0]   memreq1_msg_data_M;
        
          vc_MemReqMsgUnpack#(o,a,d) memreq1_msg_unpack
          (
            .msg    (memreq1_msg_M),
            .type_  (memreq1_msg_type_M),
            .opaque (memreq1_msg_opaque_M),
            .addr   (memreq1_msg_addr_M),
            .len    (memreq1_msg_len_M),
            .data   (memreq1_msg_data_M)
          );
          logic [p_data_nbits-1:0] m[c_num_blocks-1:0];
          logic [p_data_nbits-1:0] m_next[c_num_blocks-1:0];
          logic [p_data_nbits-1:0] m_load[c_num_blocks-1:0];
        
 000006   logic  [31:0] data_data;
%000000   logic  [31:0] data_address;
        
%000000   logic [c_req_addr_nbits-1:0] addr_M;
%000000   logic [c_physical_block_addr_nbits-1:0] physical_block_addr;
%000000   logic [c_physical_addr_nbits-1:0] physical_byte_addr;
%000000   logic [c_block_offset_nbits-1:0] block_offset;
        
          integer wr_i;
 000039   task load (integer file_load);
 000039   begin
            //integer file_load = $fopen(filein, "r"); 
            //  if (file_load == 0) begin
            //   $display("Fail to open file %s",filein);
            //   $finish;
            //  end
 000039     $display("c_physical_addr_nbits is %d",c_physical_addr_nbits);
 001728     while (!$feof(file_load))begin
 001728       $fscanf(file_load, "%x:%x\n", data_address,data_data); 
 001728       data_data= {{data_data[07:00]},
 001728                        {data_data[15:08]},
 001728                        {data_data[23:16]},
 001728                        {data_data[31:24]}};
              //$display("%x:%x",data_address,data_data);
              /* verilator lint_off WIDTHTRUNC */
              //physical_byte_addr=data_address[c_physical_addr_nbits-1:0];
 001728       physical_block_addr= data_address/c_data_byte_nbits;
 001728       block_offset= data_address[c_block_offset_nbits-1:0];
              /* verilator lint_on WIDTHTRUNC */
              //$display("location:%x",physical_block_addr);
 001728       for (wr_i = 0; wr_i<4;wr_i++) begin
 006912         m_load[physical_block_addr][ (block_offset*8) + (wr_i*8) +: 8 ] = data_data[ (wr_i*8) +: 8 ];
              end
            end
            // for(wr_i=0; wr_i<c_num_blocks;wr_i++)begin
            //     $display("%x:%x",wr_i,m_load[wr_i]);
            // end
          end
          endtask
 000039   task dump (integer file_out);
 000039   begin
            string ihex;
            //integer file_load = $fopen(filein, "r"); 
            //  if (file_load == 0) begin
            //   $display("Fail to open file %s",filein);
            //   $finish;
            //  end
            // $display("c_physical_addr_nbits is %d",c_physical_addr_nbits);
            // while (!$feof(file_load))begin
            //   $fscanf(file_load, "%x:%x\n", data_address,data_data); 
            //   data_data= {{data_data[07:00]},
            //                    {data_data[15:08]},
            //                    {data_data[23:16]},
            //                    {data_data[31:24]}};
            //   //$display("%x:%x",data_address,data_data);
            //   /* verilator lint_off WIDTHTRUNC */
            //   //physical_byte_addr=data_address[c_physical_addr_nbits-1:0];
            //   physical_block_addr= data_address/c_data_byte_nbits;
            //   block_offset= data_address[c_block_offset_nbits-1:0];
            //   /* verilator lint_on WIDTHTRUNC */
            //   //$display("location:%x",physical_block_addr);
            //   for (wr_i = 0; wr_i<4;wr_i++) begin
            //     m_load[physical_block_addr][ (block_offset*8) + (wr_i*8) +: 8 ] = data_data[ (wr_i*8) +: 8 ];
            //   end
            // end
 000039     for(wr_i=0; wr_i<c_num_blocks;wr_i++)begin
 002331         if(m[wr_i]!=0) begin
 002331           data_data=m[wr_i];
 002331           data_data= {{data_data[07:00]},
 002331                        {data_data[15:08]},
 002331                        {data_data[23:16]},
 002331                        {data_data[31:24]}};
 002331         ihex = $sformatf("%x:%x",{{wr_i,2'b0}[31:0]},data_data);
 002331         $display("%s",ihex.toupper());
 002331         $fdisplay(file_out,"%s",ihex.toupper());
                end
            end
          end
          endtask
          //----------------------------------------------------------------------
          // Actual memory array
          //----------------------------------------------------------------------
        
        
          //----------------------------------------------------------------------
          // Handle request and create response
          //----------------------------------------------------------------------
        
          // Handle case where length is zero which actually represents a full
          // width access.
        /* verilator lint_off WIDTHTRUNC */
        /* verilator lint_off WIDTHEXPAND */
%000000   logic [c_req_len_nbits:0] memreq0_msg_len_modified_M;
          assign memreq0_msg_len_modified_M
            = ( memreq0_msg_len_M == 0 ) ? (c_req_data_nbits/8)
            :                              memreq0_msg_len_M;
        
%000000   logic [c_req_len_nbits:0] memreq1_msg_len_modified_M;
          assign memreq1_msg_len_modified_M
            = ( memreq1_msg_len_M == 0 ) ? (c_req_data_nbits/8)
            :                              memreq1_msg_len_M;
        /* verilator lint_on WIDTHTRUNC */
        /* verilator lint_on WIDTHEXPAND */
        
          // Caculate the physical byte address for the request. Notice that we
          // truncate the higher order bits that are beyond the size of the
          // physical memory.
        
 000039   logic [c_physical_addr_nbits-1:0] physical_byte_addr0_M;
          assign physical_byte_addr0_M = memreq0_msg_addr_M[c_physical_addr_nbits-1:0];
        
%000000   logic [c_physical_addr_nbits-1:0] physical_byte_addr1_M;
          assign physical_byte_addr1_M = memreq1_msg_addr_M[c_physical_addr_nbits-1:0];
        
          // Calculate the block address and block offset
          /* verilator lint_off WIDTHTRUNC */
%000000   logic [c_physical_block_addr_nbits-1:0] physical_block_addr0_M;
          assign physical_block_addr0_M = physical_byte_addr0_M/c_data_byte_nbits;
        
%000000   logic [c_block_offset_nbits-1:0] block_offset0_M;
          assign block_offset0_M = physical_byte_addr0_M[c_block_offset_nbits-1:0];
        
 000744   logic [c_physical_block_addr_nbits-1:0] physical_block_addr1_M;
          assign physical_block_addr1_M = physical_byte_addr1_M/c_data_byte_nbits;
        
%000000   logic [c_block_offset_nbits-1:0] block_offset1_M;
          assign block_offset1_M = physical_byte_addr1_M[c_block_offset_nbits-1:0];
          /* verilator lint_on WIDTHTRUNC */
          // Read the data
        
 000006   logic [p_data_nbits-1:0] read_block0_M;
          assign read_block0_M = m[physical_block_addr0_M];
        
 000006   logic [c_resp_data_nbits-1:0] read_data0_M;
          assign read_data0_M = read_block0_M >> (block_offset0_M*8);
        
 000828   logic [p_data_nbits-1:0] read_block1_M;
          assign read_block1_M = m[physical_block_addr1_M];
        
 000828   logic [c_resp_data_nbits-1:0] read_data1_M;
          assign read_data1_M = read_block1_M >> (block_offset1_M*8);
        
          // Write the data if required. This is a sequential always block so
          // that the write happens on the next edge.
        
%000000   logic write_en0_M;
          assign write_en0_M = memreq0_val_M &&
              ( memreq0_msg_type_M == c_write || memreq0_msg_type_M == c_write_init );
        
 001178   logic write_en1_M;
          assign write_en1_M = memreq1_val_M &&
              ( memreq1_msg_type_M == c_write || memreq1_msg_type_M == c_write_init );
        
          // Note: amos need to happen once, so we only enable the amo transaction
          // when both val and rdy is high
        
%000000   logic amo_en0_M;
          assign amo_en0_M = memreq0_val_M && memreq0_rdy_M &&
                                          ( memreq0_msg_type_M == c_amo_and
                                         || memreq0_msg_type_M == c_amo_add
                                         || memreq0_msg_type_M == c_amo_or  );
%000000   logic amo_en1_M;
          assign amo_en1_M = memreq1_val_M && memreq1_rdy_M &&
                                          ( memreq1_msg_type_M == c_amo_and
                                         || memreq1_msg_type_M == c_amo_add
                                         || memreq1_msg_type_M == c_amo_or  );
          integer wr0_i;
          integer wr1_i;
        
          // We use this variable to keep track of whether or not we have already
          // cleared the memory. Otherwise if the clear signal is high for
          // multiple cycles we will do the expensive reset multiple times. We
          // initialize this to one since by default when the simulation starts
          // the memory is already reset to 0's.
        
 000039   logic memory_cleared = 0;
%000000   always_comb begin
%000000     m_next=m;
 000156     if ( mem_clear ) begin
 000585       if ( !memory_cleared ) begin
                
%000000         for ( wr0_i = 0; wr0_i < c_num_blocks; wr0_i = wr0_i + 1 ) begin
%000000           m_next[wr0_i] = {p_data_nbits{1'b0}};
                end
              end
            end
%000000     else if (reset)begin
              //$display("Reset mem");
%000000       m_next=m_load;
%000000     end else if ( !reset ) begin
              //$display("Mem tick %d, %d",write_en0_M,write_en1_M);
 018318       if ( write_en0_M ) begin
                //$display("Writing en0, %d",physical_block_addr0_M);
%000000         for ( wr0_i = 0; wr0_i < memreq0_msg_len_modified_M; wr0_i = wr0_i + 1 ) begin
%000000           m_next[physical_block_addr0_M][ (block_offset0_M*8) + (wr0_i*8) +: 8 ] = memreq0_msg_data_M[ (wr0_i*8) +: 8 ];
                end
              end
        
 000609       if ( write_en1_M ) begin
                //$display("Writing en1, %d",physical_block_addr0_M);
        
 000609         for ( wr1_i = 0; wr1_i < memreq1_msg_len_modified_M; wr1_i = wr1_i + 1 ) begin
 002436           m_next[physical_block_addr1_M][ (block_offset1_M*8) + (wr1_i*8) +: 8 ] = memreq1_msg_data_M[ (wr1_i*8) +: 8 ];
                end
              end
        
 018318       if ( amo_en0_M ) begin
%000000         case ( memreq0_msg_type_M )
%000000           c_amo_add: m_next[physical_block_addr0_M] = memreq0_msg_data_M + read_data0_M;
%000000           c_amo_and: m_next[physical_block_addr0_M] = memreq0_msg_data_M & read_data0_M;
%000000           c_amo_or : m_next[physical_block_addr0_M] = memreq0_msg_data_M | read_data0_M;
%000000           default: begin end
                endcase
              end
        
 018318       if ( amo_en1_M ) begin
%000000         case ( memreq1_msg_type_M )
%000000           c_amo_add: m_next[physical_block_addr1_M] = memreq1_msg_data_M + read_data1_M;
%000000           c_amo_and: m_next[physical_block_addr1_M] = memreq1_msg_data_M & read_data1_M;
%000000           c_amo_or : m_next[physical_block_addr1_M] = memreq1_msg_data_M | read_data1_M;
%000000           default: begin end
                endcase
              end
            end
        
          end
 018786   always_ff @( posedge clk ) begin
        
            // We clear all of the test memory to 0's on mem_clear. As mentioned
            // above, this only happens if we clear a test memory more than once.
            // This is useful when we are reusing a memory for many tests to
            // avoid writes from one test "leaking" into a later test -- this
            // might possible cause a test to pass when it should not because the
            // test is using data from an older test.
        
 000507     if ( mem_clear ) begin
 000507       if ( !memory_cleared ) begin
%000000         memory_cleared <= 1;
%000000         m <=m_load;
              end
 000507       m <=m_load;
            end
        
%000000     else if ( !reset ) begin
 018279       memory_cleared <= 0;
        
 018279       if ( write_en0_M ) begin
%000000         m <=m_next;
              end
        
 000609       if ( write_en1_M ) begin
 000609         m <=m_next;
              end
        
 018279       if ( amo_en0_M ) begin
%000000         m <=m_next;
              end
        
 018279       if ( amo_en1_M ) begin
%000000         m <=m_next;
              end
            end
        
          end
        
          //----------------------------------------------------------------------
          // Pack the response message
          //----------------------------------------------------------------------
        
 000900   logic [c_resp_nbits-1:0] memresp0_msg_M;
        
          vc_MemRespMsgPack#(o,a,d) memresp0_msg_pack
          (
            .type_  (memreq0_msg_type_M),
            .opaque (memreq0_msg_opaque_M),
            .test   (2'b0),
            .len    (memreq0_msg_len_M),
            .data   (read_data0_M),
            .msg    (memresp0_msg_M)
          );
        
 000828   logic [c_resp_nbits-1:0] memresp1_msg_M;
        
          vc_MemRespMsgPack#(o,a,d) memresp1_msg_pack
          (
            .type_  (memreq1_msg_type_M),
            .opaque (memreq1_msg_opaque_M),
            .test   (2'b0),
            .len    (memreq1_msg_len_M),
            .data   (read_data1_M),
            .msg    (memresp1_msg_M)
          );
        
          //----------------------------------------------------------------------
          // Memory response buffers
          //----------------------------------------------------------------------
          // We use bypass queues here since in general we want our larger
          // modules to use registered inputs. By using a pipe queues at the
          // inputs and a bypass queue at the output we cut and combinational
          // paths through the test memory (helping to avoid combinational loops)
          // and also preserve our registered input policy.
        
          vc_Queue
          #(
            .p_type      (`VC_QUEUE_BYPASS),
            .p_msg_nbits (c_resp_nbits),
            .p_num_msgs  (1)
          )
          memresp0_queue
          (
            .clk     (clk),
            .reset   (reset),
            .enq_val (memreq0_val_M),
            .enq_rdy (memreq0_rdy_M),
            .enq_msg (memresp0_msg_M),
            .deq_val (memresp0_val),
            .deq_rdy (memresp0_rdy),
            .deq_msg (memresp0_msg),
            .num_free_entries()
          );
        
          vc_Queue
          #(
            .p_type      (`VC_QUEUE_BYPASS),
            .p_msg_nbits (c_resp_nbits),
            .p_num_msgs  (1)
          )
          memresp1_queue
          (
            .clk     (clk),
            .reset   (reset),
            .enq_val (memreq1_val_M),
            .enq_rdy (memreq1_rdy_M),
            .enq_msg (memresp1_msg_M),
            .deq_val (memresp1_val),
            .deq_rdy (memresp1_rdy),
            .deq_msg (memresp1_msg),
            .num_free_entries()
          );
        
          //----------------------------------------------------------------------
          // General assertions
          //----------------------------------------------------------------------
        
          // val/rdy signals should never be x's
        
 018786   always_ff @( posedge clk ) begin
 000507     if ( !reset ) begin
%000000       `VC_ASSERT_NOT_X( memreq0_val  );
%000000       `VC_ASSERT_NOT_X( memresp0_rdy );
%000000       `VC_ASSERT_NOT_X( memreq1_val  );
%000000       `VC_ASSERT_NOT_X( memresp1_rdy );
            end
          end
        
          //----------------------------------------------------------------------
          // Line tracing
          //----------------------------------------------------------------------
        
          vc_MemReqMsg4BTrace memreq0_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memreq0_val),
            .rdy   (memreq0_rdy),
            .msg   (memreq0_msg)
          );
        
          vc_MemReqMsg4BTrace memreq1_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memreq1_val),
            .rdy   (memreq1_rdy),
            .msg   (memreq1_msg)
          );
        
          vc_MemRespMsg4BTrace memresp0_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memresp0_val),
            .rdy   (memresp0_rdy),
            .msg   (memresp0_msg)
          );
        
          vc_MemRespMsg4BTrace memresp1_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memresp1_val),
            .rdy   (memresp1_rdy),
            .msg   (memresp1_msg)
          );
        
          `VC_TRACE_BEGIN
          begin
        
            memreq0_trace.line_trace( trace_str );
            vc_trace.append_str( trace_str, "|" );
            memreq1_trace.line_trace( trace_str );
        
            vc_trace.append_str( trace_str, "()" );
        
            memresp0_trace.line_trace( trace_str );
            vc_trace.append_str( trace_str, "|" );
            memresp1_trace.line_trace( trace_str );
        
          end
          `VC_TRACE_END
        
        endmodule
        
        `endif /* VC_TEST_MEM_2PORTS_V */
        
        
