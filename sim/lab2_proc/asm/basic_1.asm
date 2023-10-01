 # Send value 0x00002000 from test source into processor
 csrr x2, mngr2proc < 0x00002000
 #lui x1, 0x00002
 #ori x1, 0x000
 csrr x4, mngr2proc < 0x00002010
 #lui x4, 0x00002
 #ori x4, 0x010
 # Loop over four elements in array

addi x1, x0, 4
loop:
 lw x3, 0(x2)
 addi x3, x3, 1
 sw x3, 0(x4)
 addi x2, x2, 4
 addi x4, x4, 4
 addi x1, x1, -1
 bne x1, x0, loop

 # Read out the four results and send to test sink for verification

 addi x1, x0, 0x2010
 lw x2, 0(x1)
 csrw proc2mngr, x2 > 2

 addi x1, x0, 0x2014
 lw x2, 0(x1)
 csrw proc2mngr, x2 > 3

 addi x1, x0, 0x2018
 lw x2, 0(x1)
 csrw proc2mngr, x2 > 4

 addi x1, x0, 0x201c
 lw x2, 0(x1)
 csrw proc2mngr, x2 > 5

 # Data section
 .data

 # src array
 .word 0x00000001
 .word 0x00000002
 .word 0x00000003
 .word 0x00000004

 # dest array
 .word 0x00000000
 .word 0x00000000
 .word 0x00000000
 .word 0x00000000