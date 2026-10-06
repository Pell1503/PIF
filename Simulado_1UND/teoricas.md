# Questões Teóricas — Lista

## Questão 01 — Sensibilidade a Caixa e Identificadores

**Resposta: c)**

A linguagem C diferencia letras maiúsculas de minúsculas (*case sensitive*). Portanto, `valor`, `VALOR`, `peso`, `Peso`, `taxa` e `TAXA` são identificadores distintos.

- `numero` e `Numero` não representam o mesmo identificador.
- `Main` não substitui `main`, pois as palavras-chave e identificadores em C são sensíveis a maiúsculas e minúsculas.
- Esse comportamento não depende exclusivamente do sistema operacional.

---

## Questão 02 — Especificadores de Formato, Escape e Erros

Há três problemas principais no código:

1. **Ponto e vírgula após `#include <stdlib.h>`**

```c
#include <stdlib.h>;
```

O correto é:

```c
#include <stdlib.h>
```

2. **`Main()` com `M` maiúsculo**

Em C, a função de entrada do programa deve ser:

```c
int main()
```

e não:

```c
int Main()
```

3. **Uso de sintaxe de C++ (`cout << endl`)**

`cout` e `endl` pertencem ao C++, não ao C. Em C deve-se utilizar `printf()`.

Além disso, a chamada:

```c
printf( A idade do aluno eh: %d anos.. , idade);
```

está sem aspas na string. O correto seria:

```c
printf("A idade do aluno eh: %d anos..\n", idade);
```

Assim, considerando também esse erro de sintaxe na chamada de `printf`, o código corrigido seria:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 20;

    printf("A idade do aluno eh: %d anos..\n", idade);

    system("PAUSE");
    return 0;
}
```

---

## Questão 03 — Atribuição Composta

Código inicial:

```c
int a = 2, b = 4, c = 5, d = 10;
```

### Primeira instrução

```c
a += b + c;
```

É equivalente a:

```c
a = a + (b + c);
```

Logo:

```text
a = 2 + (4 + 5)
a = 11
```

### Segunda instrução

```c
b *= c = d - 2;
```

Primeiro:

```c
c = d - 2;
c = 10 - 2;
c = 8;
```

Depois:

```c
b *= c;
```

Logo:

```text
b = 4 * 8
b = 32
```

### Terceira instrução

```c
d %= a + 3;
```

Primeiro:

```text
a + 3 = 11 + 3 = 14
```

Então:

```text
d = 10 % 14
d = 10
```

### Quarta instrução

```c
a += b += c += 5;
```

A avaliação ocorre da direita para a esquerda.

Primeiro:

```text
c += 5
c = 8 + 5
c = 13
```

Depois:

```text
b += c
b = 32 + 13
b = 45
```

Por fim:

```text
a += b
a = 11 + 45
a = 56
```

### Valores finais

```text
a = 56
b = 45
c = 13
d = 10
```

---

## Questão 04 — Expressões Lógicas, Relacionais e Precedência

Valores:

```text
i = 2
j = 3
k = 0
x = 2.5
y = 5.0
```

### a)

```c
i < j + 2
```

Primeiro:

```text
j + 2 = 5
2 < 5
```

Resultado:

```text
1 (Verdadeiro)
```

### b)

```c
2 * i - 5 <= j - 4
```

Calculando os dois lados:

```text
2 * 2 - 5 = -1
3 - 4 = -1
```

Então:

```text
-1 <= -1
```

Resultado:

```text
1 (Verdadeiro)
```

### c)

```c
!k && (x + y >= 7.5)
```

Como `k = 0`:

```text
!0 = 1
```

E:

```text
2.5 + 5.0 = 7.5
7.5 >= 7.5 → 1
```

Logo:

```text
1 && 1 = 1
```

Resultado:

```text
1 (Verdadeiro)
```

### d)

```c
!(i == j) || (y / x == 2.0)
```

Primeiro:

```text
2 == 3 → 0
!(0) → 1
```

Além disso:

```text
5.0 / 2.5 = 2.0
2.0 == 2.0 → 1
```

Logo:

```text
1 || 1 = 1
```

Resultado:

```text
1 (Verdadeiro)
```

### e)

```c
i == 2 && j == 4 || k == 0
```

`&&` possui precedência maior que `||`.

```text
i == 2 → 1
j == 4 → 0
1 && 0 → 0
```

Depois:

```text
k == 0 → 1
```

Então:

```text
0 || 1 = 1
```

Resultado:

```text
1 (Verdadeiro)
```

### Resumo

```text
a) 1
b) 1
c) 1
d) 1
e) 1
```

---

## Questão 05 — `for`, `while` e `do-while`

### a)

`while` testa a condição antes de executar o bloco. Portanto, pode executar **zero vezes**.

`do-while` executa o bloco primeiro e só depois testa a condição. Portanto, executa **pelo menos uma vez**.

### b)

O `for` é especialmente adequado quando a repetição possui inicialização, condição e atualização bem definidas, principalmente em contagens:

```c
for (int i = 0; i <= 100; i++) {
    printf("%d\n", i);
}
```

Nesse caso, a estrutura deixa o controle da repetição concentrado no cabeçalho, ficando mais legível que um `while`.

### c)

```c
while (condicao);
```

é sintaticamente válido. O `;` representa um corpo vazio.

Se `condicao` for verdadeira, o programa continuará avaliando a condição repetidamente. Se ela nunca se tornar falsa, ocorrerá um laço infinito.

Portanto, quando esse `;` foi colocado por engano, trata-se de um **erro de lógica**, e não de compilação.

---

## Questão 06 — Escopo, `break` e `continue`

### a)

A variável:

```c
int soma = 0;
```

foi declarada dentro das chaves do `for`.

Seu escopo está limitado ao bloco:

```c
for (...) {
    ...
    int soma = 0;
    ...
}
```

Portanto, quando o programa chega ao:

```c
printf("Soma final = %d\n", soma);
```

a variável `soma` não está visível. O compilador acusará que `soma` não foi declarada naquele escopo.

### b)

O fluxo é:

```text
i = 1 → executa
i = 2 → executa
i = 3 → executa
i = 4 → executa
i = 5 → continue
i = 6 → executa
i = 7 → executa
i = 8 → break
```

Quando `i == 5`, o `continue` pula o restante da iteração e vai para a próxima iteração do `for`.

Quando `i == 8`, o `break` encerra imediatamente o laço.

Assim, `i = 5` não entra no cálculo da soma e `i = 8`, `9` e `10` não são processados.

### c)

Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;

        if (i == 8)
            break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```

A soma é:

```text
1² + 2² + 3² + 4² + 6² + 7²
= 1 + 4 + 9 + 16 + 36 + 49
= 115
```

Resultado:

```text
Soma final = 115
```

---

## Observação

A lista fornecida apresenta a **Questão 8** como a primeira questão prática. Portanto, não foi criada uma Questão 7, pois ela não aparece no material fornecido.
