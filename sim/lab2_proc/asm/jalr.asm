csrr x1, mngr2proc < 0x200
csrr x2, mngr2proc < 2
jalr x3, x1, 0x14
addi x2, x2, 10
addi x1, x1, 60
addi x2, x2, 3
csrw proc2mngr, x2 > 5