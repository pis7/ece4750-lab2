csrr x1, mngr2proc < 6
csrr x2, mngr2proc < 5
mul x3, x1, x2
add x4, x3, x1
csrw proc2mngr, x4 > 36