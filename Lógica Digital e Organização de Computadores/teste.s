.data
msg: .string "Resultado: "   # string para exibir na tela
x:   .word 5
y:   .word 3
res: .word 0

.text
.globl _start

_start:
    # === FETCH & DECODE ===
    la   t0, x           # carrega endereço de x ? MAR ? endereço
    lw   t1, 0(t0)       # carrega valor de x ? MDR ? MEM[MAR] ? AC ? MDR

    la   t0, y           # carrega endereço de y ? MAR ? endereço
    lw   t2, 0(t0)       # carrega valor de y ? MDR ? MEM[MAR]

    # === EXECUTE ===
    add  t3, t1, t2      # ALU: t3 ? t1 + t2 

    # === MEMORY (STORE) ===
    la   t0, res         # MAR ? endereço de res
    sw   t3, 0(t0)       # MEM[MAR] ? MDR (salva o resultado na memória)

    # === WRITE-BACK / OUTPUT - IMPRESSÃO DOS RESULTADOS ===
    la   a0, msg         # endereço da string ? MDR ? msg
    li   a7, 4           # syscall: print string
    ecall                # imprime "Resultado: "

    lw   a0, 0(t0)       # lê o valor armazenado ? MDR ? MEM[MAR] ? AC ? MDR
    li   a7, 1           # syscall: print int
    ecall                # imprime valor da soma

    # === HALT ===
    li   a7, 10          # syscall: exit
    ecall                # termina o programa
