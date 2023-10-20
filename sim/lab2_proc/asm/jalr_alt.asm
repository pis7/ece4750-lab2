csrr x1, mngr2proc < 0x200
nop
nop
nop
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 2
nop
nop
nop
nop
nop
nop
nop
nop
jalr x3, x1, 0xB4
nop
nop
nop
nop
nop
nop
nop
nop
addi x2, x2, 10
nop
nop
nop
nop
nop
nop
nop
nop
addi x1, x1, 60
nop
nop
nop
nop
nop
nop
nop
nop
addi x2, x2, 3
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x2 > 5