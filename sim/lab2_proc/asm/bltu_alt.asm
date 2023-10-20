csrr x1, mngr2proc < 5
nop
nop
nop
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 4
nop
nop
nop
nop
nop
nop
nop
nop
csrr x3, mngr2proc < 6
nop
nop
nop
nop
nop
nop
nop
nop
bltu x2, x3, branch_target
nop
nop
nop
nop
nop
nop
nop
nop
addi x1, x1, 1
nop
nop
nop
nop
nop
nop
nop
nop

branch_target:
csrw proc2mngr, x1 > 5
nop
nop
nop
nop
nop
nop
nop
nop


