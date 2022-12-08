.data
Matriz_A: .word 1:4
.text
la $s0, Matriz_A
lw $t1, 0($s0)
addi  $t1, $t1, 6
