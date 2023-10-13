#CHECK OVER

   xor x1, x1, x1
   xori x1, x1, 0x0200
   andi x3, x1, 0x0004
   xor x1, x1, x1
   #Loading Data section
   lui x1, 0x0002
   sw x3,  label_a(x1)
   #data section
   .data
   label_a:
   .word 5000
