# Programação Imperativa e Funcional — Respostas Teóricas

## Questão 01 — Diferenças entre `for`, `while` e `do-while`

### a)
`while` testa a condição **antes** de executar o bloco. Portanto, pode executar **zero vezes**.

`do-while` executa o bloco **antes** de testar a condição. Portanto, executa **pelo menos uma vez**.

### b)
- **for:** adequado quando existe uma contagem ou intervalo bem definido de repetições, por exemplo, percorrer de 1 a 100.
- **while:** adequado quando a repetição depende de uma condição e não se sabe previamente quantas vezes ocorrerá.
- **do-while:** adequado quando o bloco precisa ser executado pelo menos uma vez, como menus e validação de entrada.

### c)
`while (condicao);` é sintaticamente válido, portanto não é erro de compilação. O `;` representa um **corpo vazio**.

Se `condicao` for verdadeira e nunca deixar de ser verdadeira, o programa ficará preso no laço, executando repetidamente apenas a avaliação da condição. É um erro de lógica quando o ponto e vírgula não foi intencional.

---

## Questão 02 — Escopo e tempo de vida

### a)
A variável `soma` foi declarada dentro das chaves do `for`. Seu escopo é somente aquele bloco. Portanto, ela não existe na instrução `printf` que está fora do bloco.

### b)
Mesmo colocando o `printf` dentro do `for`, `soma` seria criada novamente com `0` a cada iteração. Assim, o acumulador seria reiniciado e não armazenaria a soma total.

### c)
A variável deve ser declarada antes do `for`, para permanecer acessível durante todas as iterações:

```c
int soma = 0;

for (int i = 1; i < 10; i++) {
    soma += i * i;
}

printf("Soma final = %d\n", soma);
```

**Escopo de bloco:** uma variável declarada dentro de `{ }` pode ser acessada somente naquele bloco e em blocos internos.

**Tempo de vida:** uma variável local automática normalmente existe enquanto o fluxo estiver executando o bloco em que ela foi declarada. Ao sair desse bloco, seu tempo de vida termina.

---

## Questão 03 — Flexibilidade do `for`

### a)
No trecho:

```c
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);
```

A sequência é:

```text
36    18    9    4    2    1
```

Isso ocorre porque a divisão inteira por 2 produz `36/2 = 18`, `18/2 = 9`, `9/2 = 4`, etc.

### b)
No trecho B, a função `getch()` lê um caractere e o resultado da atribuição é colocado em `ch`. Os parênteses são necessários porque a atribuição tem prioridade menor que a comparação.

Assim:

```c
(ch = getch()) != 'X'
```

primeiro atribui o caractere a `ch` e depois compara `ch` com `'X'`.

Já:

```c
ch + 1
```

produz o valor do código do caractere seguinte na tabela de códigos de caracteres, normalmente ASCII. O `printf("%c", ...)` interpreta esse valor como caractere.

### c)
O `for (;;)` não possui condição de parada, então é um laço infinito. Ele pode ser encerrado de forma programática usando `break`, por exemplo:

```c
while (1) {
    if (condicao_de_saida) {
        break;
    }
}
```

---

## Questão 04 — `break` vs. `continue`

### a)
`break` encerra imediatamente o laço em que está inserido e o fluxo continua na primeira instrução depois desse laço.

### b)
No `for`, `continue` pula o restante do corpo da iteração atual. Depois disso, é executada a **expressão de incremento** do `for`, e então a condição é testada novamente.

Exemplo:

```c
for (int i = 0; i < 10; i++) {
    if (i == 5)
        continue;
    printf("%d\n", i);
}
```

Quando `i == 5`, o `continue` faz o programa executar `i++` antes de testar novamente `i < 10`.

### c)
Somente o laço mais interno é interrompido. O laço externo continua normalmente.

---

## Questão 05 — Operador vírgula

### a)
O laço executa **5 iterações**.

Os pares são `(0,10)`, `(1,9)`, `(2,8)`, `(3,7)` e `(4,6)`. Depois disso, `i = 5` e `j = 5`, então `i < j` é falso.

### b)

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

### c)
Uma versão equivalente usando `while`:

```c
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

---

## Questão 06 — Laço sem corpo e pós-incremento

### a)
O valor final impresso é:

```text
Valor final de x = 6
```

### b)
O `x++` é pós-incremento: primeiro o valor atual é utilizado na comparação e depois `x` é incrementado.

- começa `x = 0`: compara `0 < 5` → verdadeiro; depois `x = 1`
- `1 < 5` → verdadeiro; depois `x = 2`
- `2 < 5` → verdadeiro; depois `x = 3`
- `3 < 5` → verdadeiro; depois `x = 4`
- `4 < 5` → verdadeiro; depois `x = 5`
- `5 < 5` → falso; depois `x = 6`

O laço termina com `x = 6`.

### c)
Uma forma explícita com o mesmo resultado:

```c
int x = 0;

while (x < 5) {
    x++;
}

x++;

printf("Valor final de x = %d\n", x);
```

---

# Questões práticas

As implementações das questões 07 a 28 estão nos arquivos `.c` deste material.
