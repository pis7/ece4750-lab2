csrr x1, mngr2proc < 1
csrr x2, mngr2proc < 2
csrr x6, mngr2proc < 40
add x3, x1, x2
add x4, x3, x1
sub x5, x4, x2
mul x4, x1, x5
add x3, x4, x1
loop: 
add x3, x3, x1
sub x2, x3, x1
mul x4, x2, x3
bge x6, x4, loop
csrw proc2mngr, x4 > 42