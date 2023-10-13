csrr x1, mngr2proc < 255
csrr x2, mngr2proc < 0
xor x3, x1, x2
csrw proc2mngr, x3 > 255