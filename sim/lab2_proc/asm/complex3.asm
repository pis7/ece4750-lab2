csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 0
csrr x3, mngr2proc < 100




branch_target:
add x2, x2, x1
bne x2, x3, branch_target

csrw proc2mngr, x2 > 100





