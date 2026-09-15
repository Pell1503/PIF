
Questão 01. Truncamento de Tipos e Coerção Implícita
a) Valor exibido no console
Resposta: 2

b) Explicação e Fenômeno
Isso ocorre porque a variável valor_inteiro foi declarada como um número inteiro (int), enquanto o valor atribuído a ela (2.97) é um literal do tipo ponto flutuante (double).

Durante a atribuição, o compilador C realiza uma coerção implícita de tipo (conversão implícita) seguida de um truncamento. O processo descarta completamente a parte fracionária (.97) sem realizar qualquer tipo de arredondamento, mantendo apenas a parte inteira (2).

c) Como evitar ou controlar explicitamente
O programador tem duas abordagens principais:

Conversão explícita (Type Casting): Se a perda da parte fracionária for intencional, explicita-se para o compilador usando valor_inteiro = (int) 2.97;.

Arredondamento antes da conversão: Se for necessário manter a precisão arredondando para o inteiro mais próximo (ex: 2.97 virar 3), utiliza-se funções da biblioteca <math.h> como round(), ceil() ou floor() antes da atribuição:

C
#include <math.h>
valor_inteiro = (int) round(2.97);



Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas
a) Por que evitar <conio.h>?
A biblioteca <conio.h> (Console Input Output) é uma biblioteca legada específica para sistemas operacionais MS-DOS e plataformas Windows (compiladores MS-DOS/Borland C). Ela não faz parte do padrão ANSI C/ISO C. O uso de funções dessa biblioteca impede que o código fonte seja compilado em ambientes modernos POSIX, como Linux, macOS e servidores de hospedagem.

b) Funções equivalentes na biblioteca padrão <stdio.h>
getchar(): Lê um único caractere da entrada padrão (stdin).

putchar(): Escreve um único caractere na saída padrão (stdout).

fgetc(stdin) / fputc(): Variantes mais genéricas para controle de streams de arquivos e entrada/saída padrão.

c) Trecho de código robusto ignorando '\n' residual
C
#include <stdio.h>

int main() {
    char ch;
    
    printf("Digite um caractere: ");
    // O espaco em branco antes de %c instrui o scanf a ignorar 
    // quaisquer caracteres de espaco em branco, tabulacao ou '\n' residuais.
    scanf(" %c", &ch);

    printf("Caractere lido com sucesso: '%c'\n", ch);
    return 0;
}

Questão 04. Operadores de Atribuição Composta e Precedência

Partindo do estado inicial: int a = 1, b = 2, c = 3, d = 4;a += b + c;Avaliação da expressão à direita: b + c $\rightarrow 2 + 3 = 5$.Atribuição: a = a + 5 $\rightarrow 1 + 5 = 6$.a = 6

b *= c = d + 2;A associação do operador de atribuição = e *= ocorre da direita para a esquerda.Passo 1: c = d + 2 $\rightarrow c = 4 + 2 \rightarrow$ c = 6.Passo 2: b *= c $\rightarrow b = b \times c \rightarrow 2 \times 6 \rightarrow$ b = 12.

d %= a + a + a;Com os valores atuais: d = 4, a = 6.Avaliação da expressão à direita do operador de resto: a + a + a $\rightarrow 6 + 6 + 6 = 18$.Atribuição: d = d % 18 $\rightarrow 4 \% 18 = 4$.d = 4


d -= c -= b -= a;Avaliação da direita para a esquerda.Valores atuais: a = 6, b = 12, c = 6, d = 4.Passo 1: b -= a $\rightarrow b = 12 - 6 \rightarrow$ b = 6.Passo 2: c -= b $\rightarrow c = 6 - 6 \rightarrow$ c = 0.Passo 3: d -= c $\rightarrow d = 4 - 0 \rightarrow$ d = 4.


a += b += c += 7;Avaliação da direita para a esquerda.Valores atuais: a = 6, b = 6, c = 0.Passo 1: c += 7 $\rightarrow c = 0 + 7 \rightarrow$ c = 7.Passo 2: b += c $\rightarrow b = 6 + 7 \rightarrow$ b = 13.Passo 3: a += b $\rightarrow a = 6 + 13 \rightarrow$ a = 19.

Resumo dos Valores Finais:
a = 19

b = 13

c = 7

d = 4





Questão 05. Avaliação de Expressões Lógicas e Relacionais





a) i < j + 3$\rightarrow 1 < (2 + 3) \rightarrow 1 < 5$Resultado: 1 (Verdadeiro)

b) 2 * i - 7 <= j - 8$\rightarrow (2 * 1) - 7 <= 2 - 8 \rightarrow -5 <= -6$Resultado: 0 (Falso)

c) -x + y >= 2.0 * y$\rightarrow -3.3 + 4.4 >= 2.0 * 4.4 \rightarrow 1.1 >= 8.8$Resultado: 0 (Falso)

d) x == y$\rightarrow 3.3 == 4.4$Resultado: 0 (Falso)

e) !(n - j)$\rightarrow !(2 - 2) \rightarrow !(0)$Resultado: 1 (Verdadeiro, pois em C zero representa falso, e sua negação lógica é 1)

f) !n - j$\rightarrow (!2) - 2 \rightarrow 0 - 2 \rightarrow -2$Resultado: -2 (Expressão aritmética; avaliada como valor diferente de zero, mas seu resultado 

g) i && j && k$\rightarrow 1 \&\& 2 \&\& 3$ (todos não-nulos)Resultado: 1 (Verdadeiro)


h) i || j - 3 && k

Precedência: && tem maior precedência que ||.

Avaliação com Short-Circuit: como i é verdadeiro (1), o lado direito do || nem precisa ser avaliado.

Resultado: 1 (Verdadeiro)



i) i < j && 2 >= k$\rightarrow (1 < 2) \&\& (2 >= 3) \rightarrow 1 \&\& 0$Resultado: 0 (Falso)


j) i == 2 || j == 4 || k == 5$\rightarrow (1 == 2) \vert{}\vert{} (2 == 4) \vert{}\vert{} (3 == 5) \rightarrow 0 \vert{}\vert{} 0 \vert{}\vert{} 0$Resultado: 0 (Falso)



Questão 06. Comportamento e Precedência dos Incrementos

a) Diferença de fluxo e valores impressos
Incremento Prefixado (++n): O valor da variável é incrementado em 1 antes de ser utilizado na expressão de atribuição.

Trecho A: n vale 5. ++n eleva n para 6 e atribui 6 a x.

Valores impressos (Trecho A): n = 6, x = 6

Incremento Pós-fixado (m++): O valor atual da variável é utilizado na expressão antes de ser incrementado.

Trecho B: m vale 5. y recebe o valor atual de m (5) e só depois m é incrementado para 6.

Valores impressos (Trecho B): m = 6, y = 5


b) Comportamento Indefinido (Undefined Behavior)
A instrução printf("%d\t%d\t%d\n", n, n+1, n++); gera um comportamento indefinido (Undefined Behavior - UB) em C.

A linguagem C não especifica a ordem em que os argumentos de uma função são avaliados antes da chamada (eles podem ser avaliados da esquerda para a direita ou da direita para a esquerda, dependendo do compilador e da arquitetura). Como a variável n é modificada (n++) e também lida em outros argumentos na mesma sequência de avaliação sem um sequence point intermediário, o resultado final impresso é imprevisível e varia entre compiladores (ex: GCC vs. Clang vs. MSVC).


