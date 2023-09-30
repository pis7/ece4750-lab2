csrr x1, mngr2proc < 0x00002000
csrr x2, mngr2proc < 0x00000001
sw x2, 0(x1)
lw x3, 0(x1)
add x4, x3, x2
csrw proc2mngr, x4 > 0x00000002