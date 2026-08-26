# Lista de Exercícios – Capítulo 1: Conceitos Básicos (Respostas Teóricas)
**Disciplina:** Programação Imperativa e Funcional (PIF - 2026.2)  
**Instituição:** Cesar School  

---

## Questão 04

### Erros identificados no código original:
1. `#include <stdlib.h>;` -> O caractere ponto e vírgula após diretivas de pré-processador gera um erro de compilação.
2. `int Main{}` -> A linguagem C é *case-sensitive*, o correto é usar `main` minúsculo. Além disso, foram utilizadas chaves `{}` indevidamente no lugar dos parênteses `()`.
3. `(` e `)` -> O escopo do corpo da função foi delimitado por parênteses ao invés de chaves `{ }`.
4. `printf( Existem %d semanas no ano.,52);` -> A string de formatação precisa estar explicitamente envolta por aspas duplas: `"Existem %d semanas no ano."`.
5. `cout << endl;` -> Trata-se de sintaxe nativa da linguagem C++ (que exige a inclusão de `<iostream>`). Não pertence ao escopo da linguagem C.

### Código Corrigido:
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}



## Questão 05
Não , sob a perspectiva do padrão ANSI C o programa não está correto para construção e execução imediata.

Elementos cruciais e cláusulas que faltam:
Diretivas de Cabeçalho: Falta incluir #include <stdio.h>para a chamada à função printf()e #include <stdlib.h>para a chamada à função system().

Tipo de Retorno da principal: Pelo padrão clássico do ANSI C, omitir o tipo assumir implicitamente que ela retorna int, mas boas práticas fecham explicitamente int main().

Instrução de Retorno: Falta a instrução return 0;no final do escopo da função para indicar ao sistema operacional que o programa encerrou sem erros.


Questão 06
Erros de Sintaxe (Violação das regras da linguagem):
No trecho int a=1; b=2; c=3:, o ponto e vírgula separa declarações incorretamente e a linha termina com dois pontos. O correto para declarar variáveis ​​do mesmo tipo na mesma instrução é usar vírgulas e terminar com ponto e vírgula: int a=1, b=2, c=3;.

Não printf, faltou fechar as aspas duplas da string de controle antes do argumento das variáveis: printf("0s números são: %d%d%d\n", a, b, c);.

prédio de Lógica:
O desenvolvedor passou a variar dcomo argumento, porém ela não foi declarada no escopo do programa. Além disso, a string possui apenas três especificações de formato %d, tornando o quarto argumento inútil.

Questão 07

A saída exata obtida de cada instrução independente será:

a) Pula uma linha, aplica um recuo de tabulação horizontal e exibe o texto:



	Bom dia! Shirley.
b) Exibe o texto e quebra a linha para o início do próximo bloco:


Você já tomou café? 
c) Pula duas linhas, imprime a primeira frase, pula outra linha e imprime a segunda frase:




A solução não existe!
Não insista.
d) Imprima os textos espaçados por tabulações horizontais, quebrando a linha após a palavra "saída":


Duas	linhas	de	saída
ou	uma?
e) Imprime cada string de forma isolada, uma abaixo da outra, devido aos delimitadores \n:


um
dois
três


Questão 08
O programa pula uma linha ( \n), aplica uma tabulação horizontal ( \t) e exibe o texto cercado por aspas duplas literárias, pois a sequência \"diz ao compilador que as aspas internas devem ser interpretadas como caracteres de texto comuns, e não como delimitadores de encerramento da string.

exata:


	"Primeiro programa"


Questão 09
exata:


	"Primeiro programa"
Explicação:
O compilador C interpreta os modificadores %ccomo placeholders destinados a exibir um caractere único mapeado na tabela ASCII. Quando passamos sequências de escape em formato de caractere (envoltas por aspas simples, como '\n', '\t', '\"'), o compilador não imprime as letras literalmente na tela; em vez disso, execute os seus respectivos comandos de controle de terminal (nova linha, tabulação e renderização de aspas duplas literárias).



Questão 10
Alternativa correta:  b) Verdadeiro (a linguagem C diferenciação rigorosamente letras secretas de minúsculas).

Justificativa:
Por ser rigidamente sensível a maiúsculas e minúsculas, cada caractere maiúsculo e minúsculo possui mapeamentos numéricos e binários distintos na tabela de codificação ASCII. Logo, para o compilador C, os identificadores peso, Pesoe PESOrepresentam três variáveis ​​completamente independentes localizadas em posições de memória distintas.


Questão 12
a) int a;

Status: Correto

Justificativa: Declaração válida de um tipo inteiro padrão seguindo a sintaxe da linguagem.

b) flutuar b;

Status: Correto

Justificativa: Declaração válida de uma variável de ponto flutuante de precisão simples.

c) ponto flutuante duplo c;

Status: Incorreto

Justificativa: Combinação ilegal de dois tipos primitivos na mesma variável. O correto para maior precisão real é usar isoladamente o tipo double.

d) caractere sem sinal d;

Status: Correto

Justificativa: Modificador de sinal perfeitamente válido aplicado ao tipo de caractere, permitindo armazenar valores numéricos inteiros na faixa de 0 a 255.

e) e sem sinal;

Status: Correto

Justificativa: Sintaxe válida. Quando o tipo de dado base é omitido após o modificador unsigned, o compilador C assume por padrão que se trata de um tipo unsigned int.

f) flutuação longa f;

Status: Incorreto

Justificativa: Redundância ilegal de tipos no padrão ANSI C moderno. Para representar precisão dupla deve-se usar doubleou long double.

g) g longo;

Status: Correto

Justificativa: Atalho de declaração válido e aceito pelo compilador. Omitir o tipo após longfazer com que a instrução seja interpretada como long int.

h) h duplo longo;

Status: Correto

Justificativa: Declaração válida de ponto flutuante com precisão interminável (geralmente alocando 80 ou 128 bits dependendo da arquitetura).






Questão 17
As instruções das alternativas a) , b) e c) estão sintaticamente corretas. A alternativa d) está incorreta devido à ausência dos pais obrigatórios da função.

O que as variações demonstram?
Demonstramos que o compilador C ignora espaços em branco sobressalentes e tabulações ( whitespace-insensitive ) entre os tokens e os delimitadores do código. Isso permite flexibilidade total ao desenvolvedor para adotar o estilo de espaçamento que julgar mais legível.