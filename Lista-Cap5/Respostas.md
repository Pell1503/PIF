# Lista de Exercícios – Funções, Recursão e Pré-processador em C
Cesar School | Programação Imperativa e Funcional

## Parte I – Questões teóricas (respostas)

---
### Questão 01 – Anatomia de uma função e o papel do protótipo

**a)**
- **Protótipo:** `float celsius(float);` (antes da `main`). Anuncia ao compilador o nome, o tipo de retorno e os tipos dos parâmetros da função, antes de ela ser usada.
- **Chamada:** `c = celsius(f);` (dentro da `main`). É o momento em que a função é executada: o valor de `f` é copiado para o parâmetro e o valor retornado é atribuído a `c`.
- **Definição:** `float celsius(float fahr) { ... }` (depois da `main`). Contém o corpo da função, isto é, o código que realmente realiza o cálculo.

**b)** O protótipo permite que o compilador **verifique** se a chamada está correta: quantidade de argumentos, tipos e uso do valor de retorno, fazendo conversões implícitas quando necessário. Se fosse omitido e a função fosse definida depois da `main()`, o compilador (no C89) assumiria uma declaração implícita `int celsius()`, **sem nenhuma verificação de parâmetros** (nem de quantidade, nem de tipo) e com retorno presumido `int`. Isso pode gerar lixo/comportamento indefinido, pois o `float` seria passado como `double` e o retorno seria interpretado como `int`. Em compiladores modernos (C99+), isso gera aviso ou erro.

**c)** O tipo de `celsius()` é **`float`**. O tipo da função é o tipo do valor que ela **devolve** a quem a chamou, porque é esse valor que entra nas expressões do chamador (`c = celsius(f)`), e por isso o compilador precisa saber como interpretá-lo e quanto espaço ele ocupa. Os parâmetros são apenas entradas internas à função e não determinam o que sai dela.

---
### Questão 02 – O comando `return` e suas limitações

**a)** Uma função em C devolve **no máximo um valor** via `return`. O programador pretendia devolver a soma e a média ao mesmo tempo com `return soma, media;`. Porém, `,` é o **operador vírgula**: avalia `soma`, descarta e resulta em `media`. Logo, só a média é retornada; a soma é perdida.

**b)** `return;` **encerra imediatamente** a execução da função e devolve o controle ao chamador (sem valor). No exemplo, se `erro < 0`, a mensagem de erro é impressa e a função termina sem imprimir "Codigo processado". **Não é obrigatório** no final de uma função `void`: ao chegar à chave `}` final, a função retorna automaticamente.

**c)**
```c
int media(int a, int b, int c) {
    return (a + b + c) / 3;
}

int soma(int a, int b, int c) {
    return a + b + c;
}
```
Como `return` devolve apenas **um** valor, para obter dois resultados distintos é preciso duas funções (ou, mais adiante, usar ponteiros/structs).

---
### Questão 03 – Funções `void`, parâmetros e assinaturas

**a)**
| Protótipo | Parâmetros de entrada | Valor de retorno |
|---|---|---|
| `void exibe_mensagem(char* msg);` | Sim (um `char*`) | Não (`void`) |
| `int obter_codigo(void);` | Não | Sim (`int`) |
| `void limpar_tela(void);` | Não | Não |

**b)** Uma função com retorno **calcula e devolve um valor** que será usado numa expressão. Um procedimento (`void`) **executa uma ação** (efeito colateral) e não devolve nada.
- Função com retorno: `int soma(int a, int b)`, pois o resultado será usado depois.
- Procedimento: `void exibeMenu(void)`, que apenas imprime o menu na tela.

**c)** **Não é válida.** `limpar_tela` é `void`, não produz valor, e portanto não pode ser atribuída a `x`. Resulta em erro de compilação.

---
### Questão 04 – Recursão

**a)** Caso base: `n == 0`, que retorna `1`. Passo recursivo: `n * fatorial(n - 1)`. Sem o caso base, a função se chamaria indefinidamente (`n` ficaria negativo), nunca terminando e causando **estouro de pilha (stack overflow)**.

**b)** Rastreamento de `fatorial(4)`:

*Empilhamento:*
```
fatorial(4) = 4 * fatorial(3)
  fatorial(3) = 3 * fatorial(2)
    fatorial(2) = 2 * fatorial(1)
      fatorial(1) = 1 * fatorial(0)
        fatorial(0) -> caso base, retorna 1
```
*Desempilhamento:*
```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1 = 1
fatorial(2) devolve 2 * 1 = 2
fatorial(3) devolve 3 * 2 = 6
fatorial(4) devolve 4 * 6 = 24
```

**c)** A cada chamada, um novo **registro de ativação (stack frame)** é empilhado, contendo o parâmetro `n`, variáveis locais e o endereço de retorno. Cada chamada fica "em espera" aguardando a anterior terminar. Ao atingir o caso base, os frames são desempilhados um a um, devolvendo os valores. Sem caso base, os frames continuam sendo empilhados até esgotar a memória da pilha, causando **falha de segmentação / stack overflow**.

---
### Questão 05 – `#define`, constantes e macros com argumentos

**a)** Saídas:
- `SQR(2+3)` → `((2+3)*(2+3))` = **25**
- `DOBRO(2+3)` → `2+3*2` = 2 + 6 = **8**

A macro é uma **substituição textual**. `SQR` tem parênteses de proteção, então o argumento é avaliado por inteiro. `DOBRO` não tem, e a precedência do `*` faz só o `3` ser dobrado.

**b)** Porque `#define` é uma diretiva do pré-processador, não um comando C: ela termina no fim da linha. Um `;` seria incluído na substituição e causaria erros (ex.: `x = PI;;`). Por convenção usam-se **maiúsculas** para distinguir constantes/macros de variáveis e funções, facilitando a leitura.

**c)** `#define PRN (n) printf("%d", n)` está incorreto porque o **espaço** entre `PRN` e `(n)` faz o pré-processador tratar `PRN` como constante simbólica cujo texto é `(n) printf("%d", n)`. A forma correta é sem espaço: `#define PRN(n) printf("%d", n)`.

Diferença entre macro e função: a macro é expandida **textualmente antes da compilação** (sem verificação de tipos, sem chamada, sem pilha, e pode avaliar o argumento mais de uma vez), enquanto a função é compilada, tem tipos verificados e é executada via chamada.

---
### Questão 06 – `#include`, `#undef` e compilação condicional

**a)** `#include <stdio.h>` busca o arquivo nos **diretórios padrão do sistema/compilador** (bibliotecas padrão). `#include "areas.h"` busca primeiro no **diretório do projeto/arquivo atual** e depois nos diretórios padrão (arquivos do próprio programador).

**b)** `#undef SOMA` **remove** a definição da macro `SOMA`, que deixa de existir a partir dali. A forma `#undef SOMA(x,y)` é incorreta porque `#undef` recebe apenas o **nome** do identificador, sem lista de parâmetros.

**c)** Se `DEBUG` não foi definido, será impressa **"Modo normal"**. A decisão é tomada no **pré-processamento** (antes da compilação), que mantém apenas o trecho do `#else`. As diretivas não aparecem no executável porque são consumidas pelo pré-processador; o compilador só recebe o código já resultante.

---
## Parte II – Questões práticas

Cada questão possui um arquivo `.c` nesta pasta (`q07_...c` até `q28_...c`).

Compilar (exemplo):
```bash
gcc -Wall -o q07 q07_soma.c
./q07
```
- Q22 usa `areas.h` (mantenha os dois arquivos na mesma pasta).
- Q24: compile com `gcc -DDEBUG ...` ou descomente `#define DEBUG` para ativar a depuração.
- Q25/Q27 etc. que usam `float` aceitam números com ponto decimal.
