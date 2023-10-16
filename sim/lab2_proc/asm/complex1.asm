csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 6
csrr x3, mngr2proc < -6
bge x3, x1, branch_target
addi x1, x1, 1 
#x1 = 6

branch_target:
add x1, x2, x2
#x1 = 12
sub x1, x3, x1
#x1 = -18

branch_target_1:
add x1, x1, x1
csrw proc2mngr, x1 > -36





