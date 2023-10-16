csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
csrr x3, mngr2proc < 6
bne x2, x3, branch_target
addi x1, x1, 1

branch_target:
csrw proc2mngr, x1 > 5



