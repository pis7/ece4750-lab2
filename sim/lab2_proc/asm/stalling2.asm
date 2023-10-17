csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 0
csrr x3, mngr2proc < 0
csrr x5, mngr2proc < 20


loop:
sw x1, 0(x2)
addi x4, x2, 4
lw x3, 0(x1)
addi x3, x3, 2
addi x1, x1, 1
bne x1, x5, loop

csrw proc2mngr, x1 > 20