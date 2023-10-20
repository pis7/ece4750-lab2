csrr x1, mngr2proc < 0x00002000
nop
nop
nop
nop
nop
nop
nop
nop
sw x2, 0(x1)
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x2 > 0

.data
.word 0x01020304