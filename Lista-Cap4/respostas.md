# Ficha de Exercícios – Programação Imperativa e Funcional
## Questões Teóricas – Linguagem C

**Instituição:** CESAR School  
**Disciplina:** Programação Imperativa e Funcional  
**Conteúdo:** Estruturas Condicionais, Operadores Lógicos e Tomada de Decisão.

---

## Questão 01 – Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

### a) Qual é o efeito prático de escrever `if (x = 0)` em vez de `if (x == 0)`? Explique o que acontece com a variável x e qual bloco de código será executado.

A expressão `x = 0` realiza uma atribuição, ou seja, atribui o valor zero à variável `x`. Em seguida, o resultado da expressão é avaliado pela estrutura `if`. Como o valor atribuído é zero, a condição é considerada falsa e o bloco associado ao `if` não será executado.

Já a expressão `x == 0` realiza uma comparação, verificando se o valor de `x` é igual a zero, sem modificar seu conteúdo.

Portanto, a diferença principal é que o operador `=` atribui um valor, enquanto o operador `==` compara dois valores.

### b) Como a Linguagem C interpreta valores numéricos inteiros ou reais dentro da condição do comando if? O que significa um resultado ser avaliado como falso ou verdadeiro?

Na linguagem C, uma expressão numérica utilizada diretamente em uma condição `if` é interpretada de acordo com seu valor.

- **Verdadeiro:** qualquer valor diferente de zero.
- **Falso:** o valor igual a zero.

Essa regra vale tanto para números inteiros quanto para números reais (`float` e `double`).

Por exemplo:

```c
if (10) {
    printf("Verdadeiro\n");
}

if (0) {
    printf("Falso\n");
}
```

No primeiro caso, a mensagem será exibida porque 10 é diferente de zero. No segundo caso, o bloco não será executado porque zero representa falso.

### c) Analise a instrução `if (x = -5)` e determine se o bloco de código associado será executado ou ignorado. Justifique sua resposta com base no padrão ANSI C.

O bloco será executado, pois a expressão `x = -5` atribui o valor -5 à variável `x` e retorna esse mesmo valor como resultado da expressão.

De acordo com as regras da linguagem C, qualquer valor diferente de zero é considerado verdadeiro em uma condição. Como -5 é diferente de zero, o resultado da expressão será verdadeiro.

Assim, além de executar o bloco do `if`, o programa também modifica o conteúdo da variável `x`, que passa a armazenar -5.

---

## Questão 02 – Associação do Comando else e Aninhamento de Decisões

### a) Qual mensagem será impressa no console ao executar o código acima? Justifique por que a Opção B é ou não exibida.

A mensagem impressa será:

```text
Opção B
```

A primeira condição `x > 10` é verdadeira, pois `x` possui o valor 15. Portanto, o programa entra no primeiro `if` e avalia a segunda condição: `y > 10`.

Como `y` possui o valor 5, essa segunda condição é falsa. Consequentemente, o bloco associado ao `else` será executado, exibindo "Opção B".

### b) Qual é a regra oficial da Linguagem C para associar uma cláusula else a um comando if em códigos sem chaves de bloco?

Na linguagem C, quando não são utilizadas chaves `{ }`, a cláusula `else` é associada ao comando `if` mais próximo que ainda não possui um `else` correspondente.

Essa regra é conhecida como associação do *else mais próximo* (*dangling else*).

No código apresentado, o `else` pertence ao segundo `if`, ou seja, à condição `if (y > 10)`, e não ao primeiro `if (x > 10)`.

### c) Reescreva o código acima utilizando chaves { } para garantir explicitamente que a Opção B seja impressa apenas quando x <= 10.

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Com essa organização, o `else` pertence explicitamente ao primeiro `if`. Dessa maneira, a mensagem "Opção B" somente será exibida quando `x` for menor ou igual a 10.

---

## Questão 03 – Operador Condicional Ternário vs. Estrutura if-else

### a) Explique detalhadamente o funcionamento da segunda linha de código e qual valor será armazenado na variável situacao se media = 6.8.

A instrução:

```c
situacao = (media >= 7.0) ? 'A' : 'R';
```

Utiliza o operador condicional ternário `?:`, que funciona como uma forma resumida de uma estrutura `if-else`.

Primeiramente, o programa verifica se a variável `media` é maior ou igual a 7.0.

- Se a condição for verdadeira, o caractere `'A'` será atribuído à variável `situacao`, indicando aprovação.
- Se a condição for falsa, o caractere `'R'` será atribuído à variável `situacao`, indicando reprovação.

Como `media = 6.8`, a condição `media >= 7.0` é falsa. Portanto, o valor armazenado em `situacao` será `'R'`.

### b) Reescreva o trecho de código acima utilizando obrigatoriamente a estrutura tradicional if-else.

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

O código mantém a mesma lógica do operador ternário, mas utiliza a estrutura condicional tradicional, tornando as decisões mais explícitas.

### c) O operador ternário pode substituir qualquer estrutura if-else na Linguagem C? Explique as limitações do operador ternário em relação a blocos com múltiplos comandos.

Não. O operador ternário não substitui completamente todas as estruturas `if-else` da linguagem C.

Sua principal limitação é que ele foi desenvolvido para selecionar entre duas expressões, retornando um único resultado. Já a estrutura `if-else` permite executar vários comandos dentro de cada bloco, utilizando chaves `{ }`.

Por exemplo, quando uma condição exige executar diversas instruções, realizar cálculos, imprimir mensagens e modificar diferentes variáveis, o `if-else` tradicional é mais adequado.

Portanto, o operador ternário é recomendado principalmente para decisões simples, enquanto o `if-else` oferece maior flexibilidade para estruturas condicionais mais complexas.

---

## Questão 04 – Seleção Múltipla com switch-case e Efeito Fall-Through

### a) Escreva a saída exata gerada no terminal ao executar este programa. Explique por que ocorreu mais de uma impressão.

A saída será:

```text
Prata
Ouro
```

Isso acontece porque a variável `codigo` possui o valor 2. Assim, a execução começa diretamente no `case 2`, que imprime "Prata".

Entretanto, como não existe uma instrução `break` após esse comando, a execução continua para o próximo bloco, o `case 3`, imprimindo também "Ouro".

Esse comportamento acontece devido ao fenômeno conhecido como *fall-through*, no qual a execução continua passando pelos próximos casos até encontrar uma instrução `break` ou chegar ao final do `switch`.

### b) Qual é o papel da instrução break dentro de um bloco switch-case e qual é o nome do fenômeno que ocorre quando ela é omitida?

A instrução `break` tem a função de interromper a execução do bloco `switch` assim que o caso correspondente é executado.

Quando o `break` é omitido, o programa continua executando as instruções dos próximos casos, independentemente de suas condições. Esse comportamento é chamado de *fall-through*.

Portanto, utilizar `break` evita execuções inesperadas e garante que apenas o bloco desejado seja executado, quando esse for o comportamento pretendido.

### c) Quais tipos de dados de variáveis ou expressões podem ser utilizados como argumento no comando switch (expressão)? É permitido usar float ou double? Justifique.

Na linguagem C, o comando `switch` aceita expressões de tipos inteiros, como:

- `int`;
- `char`;
- `short`;
- `long`;
- Tipos enumerados (`enum`).

Essas expressões são submetidas às conversões inteiras previstas pela linguagem.

Não é permitido utilizar diretamente os tipos `float` ou `double` como expressão de um `switch`, pois essa estrutura exige um tipo inteiro.

Isso acontece porque os valores utilizados nos rótulos `case` precisam ser expressões constantes inteiras, permitindo que o programa faça a seleção entre alternativas de forma compatível com as regras da linguagem.

---

## Questão 05 – Avaliação de Curto-Circuito em Operadores Lógicos

### a) Qual será a saída exata impressa pelo comando printf? Observe se o incremento ++b foi executado ou ignorado.

A saída será:

```text
a = 0, b = 5, c = 8
```

A primeira condição é `a != 0`. Como `a` possui valor zero, essa comparação é falsa.

O operador lógico `&&` exige que as duas condições sejam verdadeiras para que o resultado final seja verdadeiro. Como a primeira condição já é falsa, o programa não precisa avaliar a segunda expressão `++b > 5`.

Consequentemente, o incremento de `b` não é executado e seu valor permanece 5.

Como a condição completa é falsa, o programa executa o bloco `else`, realizando `c -= 2`. Assim, `c` passa de 10 para 8.

### b) Explique o conceito de avaliação de curto-circuito para o operador lógico E (&&) e para o operador lógico OU (||).

A avaliação de curto-circuito (*short-circuit evaluation*) é um mecanismo da linguagem C que permite interromper a avaliação de uma expressão lógica quando seu resultado já pode ser determinado.

No operador lógico E (`&&`), se a primeira condição for falsa, a segunda não será avaliada, pois o resultado final necessariamente será falso.

No operador lógico OU (`||`), se a primeira condição for verdadeira, a segunda não será avaliada, pois o resultado final necessariamente será verdadeiro.

Esse mecanismo evita avaliações desnecessárias e pode impedir a execução de operações que não precisam acontecer.

### c) Qual seria o valor final de b e c se a condição fosse alterada para `if (a == 0 || ++b > 5)`?

Os valores finais seriam:

- `b = 5`;
- `c = 20`.

Isso acontece porque a primeira condição `a == 0` é verdadeira, já que `a` possui valor zero.

Como o operador utilizado é o OU (`||`), basta que uma das condições seja verdadeira para que o resultado final também seja verdadeiro.

Dessa maneira, devido à avaliação de curto-circuito, a expressão `++b > 5` não será executada. Portanto, `b` continuará valendo 5.

Como a condição do `if` é verdadeira, o programa executará `c += 10`, aumentando o valor de `c` de 10 para 20.

---

## Questão 06 – Construções else-if e Análise Lógica de Intervalos

### a) Qual será a saída do programa para idade = 65? Explique por que múltiplas mensagens são exibidas.

A saída será:

```text
Idoso
Adulto
Jovem
```

Isso acontece porque o programa utiliza três estruturas `if` independentes.

Para a idade igual a 65, todas as condições são verdadeiras:

- `idade >= 60`: verdadeira, imprime "Idoso".
- `idade >= 18`: verdadeira, imprime "Adulto".
- `idade >= 12`: verdadeira, imprime "Jovem".

Como as estruturas são independentes, o programa avalia todas elas, permitindo que várias mensagens sejam exibidas na mesma execução.

O `else` está associado ao último `if` (`idade >= 12`). Como essa condição também é verdadeira, a mensagem "Criança" não será exibida.

### b) Qual é a diferença fundamental de execução entre uma sequência de comandos if independentes e uma cadeia else-if?

A principal diferença está na forma como as condições são avaliadas.

Nos comandos `if` independentes, cada condição é verificada separadamente, mesmo que uma condição anterior já tenha sido verdadeira. Por isso, mais de um bloco pode ser executado.

Já em uma cadeia `else-if`, as condições são avaliadas em sequência, mas somente o primeiro bloco cuja condição seja verdadeira será executado. Depois disso, as demais condições são ignoradas.

Portanto, o `else-if` é mais adequado quando as alternativas são mutuamente exclusivas e o programa deve selecionar apenas uma classificação.

### c) Reescreva o programa utilizando a estrutura elegante e correta else-if para garantir que apenas uma categoria seja impressa.

```c
int idade = 65;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

Nessa versão, as condições são verificadas em sequência, começando pela maior faixa etária.

Quando a idade é 65, a primeira condição é verdadeira e o programa imprime somente "Idoso". As demais condições não são avaliadas.

Dessa forma, a estrutura `else-if` garante que apenas uma categoria seja exibida, evitando múltiplas classificações para o mesmo indivíduo.

---

**Fim das questões teóricas.**