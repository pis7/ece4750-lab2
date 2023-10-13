csrr x1, mngr2proc < 255
csrr x2, mngr2proc < 255
xor x3, x1, x2
csrw proc2mngr, x3 > 0