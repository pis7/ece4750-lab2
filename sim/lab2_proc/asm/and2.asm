csrr x1, mngr2proc < 127
csrr x2, mngr2proc < 128
and x3, x1, x2
csrw proc2mngr, x3 > 0