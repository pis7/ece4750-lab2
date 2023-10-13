csrr x1, mngr2proc < 8
csrr x2, mngr2proc <2 
srl x3, x1, x2
csrw proc2mngr, x3 > 2