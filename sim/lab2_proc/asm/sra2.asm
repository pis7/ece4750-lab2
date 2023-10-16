csrr x1, mngr2proc < 256
csrr x2, mngr2proc < 9 
sra x3, x1, x2
csrw proc2mngr, x3 > 0