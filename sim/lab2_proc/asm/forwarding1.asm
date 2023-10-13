csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 2
add x3, x1, x2
add x4, x3, x1
csrw proc2mngr, x4 > 4