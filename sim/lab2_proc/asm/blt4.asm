csrr x1, mngr2proc < 0
csrr x2, mngr2proc < -4
blt x1, x2, branch_target
addi x1, x1, 1

branch_target:
csrw proc2mngr, x1 > 1



