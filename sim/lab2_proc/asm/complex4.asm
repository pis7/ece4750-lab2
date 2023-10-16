csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 0
csrr x3, mngr2proc < 100
csrr x4, mngr2proc < 1


branch_target:
add x2, x2, x1
bge x2, x3, branch_target
addi x2, x2, -104

branch_target_1:
mul x2, x1, x2
bge x2, x3, branch_target_1
mul x2, x2, x2
mul x2, x2, x2

branch_target_2:
srli x2, x2, 1
bge x2, x4, branch_target_2

csrw proc2mngr, x2 > 0





