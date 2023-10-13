csrr x1, mngr2proc < 2
csrr x2, mngr2proc < 15 
sll x3, x1, x2
csrw proc2mngr, x3 > 65536