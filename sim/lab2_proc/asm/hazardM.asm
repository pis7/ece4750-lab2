csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4

sub x3, x1, x2
add x4, x2, x2
add x4, x2, x3

csrw proc2mngr, x4 > 5