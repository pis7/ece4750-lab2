csrr x11, mngr2proc < 0x2800 # dst array
csrr x12, mngr2proc < 0x2000 # src array
csrr x13, mngr2proc < 100 # size

addi x10, x0, 0

loop:
lw x6, 0(x12)
bne x6, x0, foo
jal x0, bar

foo:
sw x6, 0(x11)
addi x11, x11, 4
addi x10, x10, 1

bar:
addi x12, x12, 4
addi x13, x13, -1
bne x13, x0, loop

csrw proc2mngr, x10 > 96


.data
.offset  0x2000
.word 16807     
.word 1622650073
.word 1144108930
.word 101027544 
.word 1458777923
.word 823564440 
.word 0
.word 114807987 
.word 1441282327
.word 823378840 
.word 896544303 
.word 1264817709
.word 1817129560
.word 197493099 
.word 893351816 
.word 1954899097
.word 563613512 
.word 1580723810
.word 1358580979
.word 2128236579
.word 530511967 
.word 1551901393
.word 1399125485
.word 1356425228
.word 585640194 
.word 1646035001
.word 510616708 
.word 771515668 
.word 1044788124
.word 1952509530
.word 1942727722
.word 1108728549
.word 2118797801
.word 0 
.word 0
.word 1075260298
.word 595028635 
.word 1137623865
.word 2020739063
.word 1635339425
.word 1777724115
.word 34075629  
.word 1864546517
.word 1581030105
.word 2146319451
.word 500782188 
.word 753799505 
.word 1269406752
.word 884936716 
.word 578354438 
.word 0
.word 616783871 
.word 330111137 
.word 1723153177
.word 1147722294
.word 2051621609
.word 1190959745
.word 1341853635
.word 343098142 
.word 1534827968
.word 195400260 
.word 6441594   
.word 57716395  
.word 2014119113
.word 388471006 
.word 1904797942
.word 322842082 
.word 828530767 
.word 1073185695
.word 1260973671
.word 1267248590
.word 1194314738
.word 2111631616
.word 304555640 
.word 541437335 
.word 996497972 
.word 270649095 
.word 685583454 
.word 272112289 
.word 1334948905
.word 532236123 
.word 836045813 
.word 60935238  
.word 915896220 
.word 2034712366
.word 281725226 
.word 197941363 
.word 152607844 
.word 543436550 
.word 1681808623
.word 750597385 
.word 1737195272
.word 1399399247
.word 1459413496
.word 537140623 
.word 1012028144
.word 1289335735
.word 1623161625
.word 2043046042
.word 943454679 
.offset  0x2400
.word 282475249 
.word 984943658 
.word 470211272 
.word 1457850878
.word 2007237709
.word 1115438165
.word 74243042  
.word 1137522503
.word 16531729  
.word 143542612 
.word 1474833169
.word 1998097157
.word 1131570933
.word 1404280278
.word 1505795335
.word 1636807826
.word 101929267 
.word 704877633 
.word 1624379149
.word 784558821 
.word 2110010672
.word 1617819336
.word 156091745 
.word 1899894091
.word 937186357 
.word 1025921153
.word 590357944 
.word 357571490 
.word 1927702196
.word 130060903 
.word 1083454666
.word 685118024 
.word 1060806853
.word 194847408 
.word 158374933 
.word 824938981 
.word 1962408013
.word 997389814 
.word 107554536 
.word 1654001669
.word 269220094 
.word 1478446501
.word 1351934195
.word 1557810404
.word 1908194298
.word 657821123 
.word 1102246882
.word 1816731566
.word 1807130337
.word 892053144 
.word 1004844897
.word 382955828 
.word 1227619358
.word 70982397  
.word 1070477904
.word 1606946231
.word 1912844175
.word 1808266298
.word 456880399 
.word 280090412 
.word 589673557 
.word 889688008 
.word 1524325968
.word 515204530 
.word 681910962 
.word 1400285365
.word 1463179852
.word 832633821 
.word 316824712 
.word 1815859901
.word 2051724831
.word 318153057 
.word 877819790 
.word 1213110679
.word 1049077006
.word 2063936098
.word 428975319 
.word 1351345223
.word 1398556760
.word 1724586126
.word 1023129506
.word 436476770 
.word 1936329094
.word 304987844 
.word 881140534 
.word 1901915394
.word 348318738 
.word 784559590 
.word 290145159 
.word 977764947 
.word 971307217 
.word 2000755539
.word 462242385 
.word 1951894885
.word 1848682420
.word 1086531968
.word 1755699915
.word 992663534 
.word 1358796011
.word 1771024152
.offset  0x2800