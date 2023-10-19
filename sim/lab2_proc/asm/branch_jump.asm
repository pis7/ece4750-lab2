csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 2
bne x2, x1, branch 
jal x3, jump
addi x2, x2, 10
addi x1, x1, 60

jump:
addi x2, x2, 3

branch:
add x2, x2, x1
csrw proc2mngr, x2 > 3
csrw proc2mngr, x1 > 1
csrw proc2mngr, x3 > 0
