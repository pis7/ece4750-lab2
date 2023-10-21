csrr x11, mngr2proc < 0x2000 # src array
csrr x12, mngr2proc < 10 # size
csrr x13, mngr2proc < 56 # value

addi x5, x0, 0

loop:
lw x6, 0(x11)
bne x6, x13, foo
addi x10, x5, 0
jal x0, done

foo:
addi x11, x11, 4
addi x5, x5, 1
bne x5, x12, loop
addi x10, x0, -1
jal x0, done

done:
csrw proc2mngr, x10 > 4

.data
.offset  0x2000
.word 3523
.word 345637
.word 364
.word 92345
.word 56
.word 90346
.word 2345
.word 457
.word 8329
.word 23458