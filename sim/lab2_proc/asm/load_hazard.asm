csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
sw x1, 0(x2)
lw x1, 0(x2)
csrw proc2mngr, x2 > 4
csrw proc2mngr, x1 > 5