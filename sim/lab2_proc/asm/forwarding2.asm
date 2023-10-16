csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 2
add x3, x1, x2
add x4, x3, x1
sub x5, x4, x2
mul x4, x1, x5
add x3, x4, x1
csrw proc2mngr, x3 > 3