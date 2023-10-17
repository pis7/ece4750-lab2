csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 0
csrr x3, mngr2proc < 0
csrr x4, mngr2proc < 100


loop:
lw x2, 0(x3)
add x2, x2, x1
addi x3, x3, 4
blt x3, x4, loop

csrw proc2mngr, x3 > 100