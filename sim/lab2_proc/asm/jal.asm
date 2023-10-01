csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 2
jal x3, jump
addi x2, x2, 10
addi x1, x1, 60

jump:
addi x2, x2, 3
add x4, x1, x2
csrw proc2mngr, x4 > 6
csrw proc2mngr, x3 > 0x20C