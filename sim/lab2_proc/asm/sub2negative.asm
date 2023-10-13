csrr x1, mngr2proc < 100000
csrr x2, mngr2proc < 1000000
sub x3, x1, x2
csrw proc2mngr, x3 > -900000