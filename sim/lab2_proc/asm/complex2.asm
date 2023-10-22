csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 6
csrr x3, mngr2proc < -6
csrr x4, mngr2proc < -100
bge x3, x1, branch_target
addi x1, x1, 1 
#x1 = 6

branch_target:
sub x1, x3, x1
blt x1, x4, branch_target

csrw proc2mngr, x1 > -12
