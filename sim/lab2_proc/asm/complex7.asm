csrr x1, mngr2proc < 256
csrr x2, mngr2proc < 256
csrr x3, mngr2proc < 256
csrr x6, mngr2proc < 0


branch_target:
srai x1, x1, 1
addi x2, x2, 256
beq x1, x6, done
bne x1, x6, branch_target_1

branch_target_1:
srai x2, x2, 1
addi x3, x3, 256
beq x2, x6, branch_target
bne x2, x6, branch_target_2


branch_target_2:
srai x3, x3, 1
beq x3, x6, branch_target_1
bne x3, x6, branch_target_2


done:
csrw proc2mngr, x1 > 0





