csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 6
csrr x3, mngr2proc < -6
bge x2, x3, branch_target
bne x2, x3, branch_squash_target
addi x1, x1, 1

branch_squash_target:
add x1, x2, x2
sub x1, x3, x1

branch_target:
add x1, x1, x1
csrw proc2mngr, x1 > 10





