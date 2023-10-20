csrr x1, mngr2proc < 1
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
jal x3, jump
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
jump:
addi x2, x2, 3
nop
nop
nop
nop
nop
nop
nop
nop
add x4, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x4 > 6
nop
nop
nop
nop
nop
nop
nop
nop
