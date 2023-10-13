csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 8 
sll x3, x1, x2
csrw proc2mngr, x3 > 256