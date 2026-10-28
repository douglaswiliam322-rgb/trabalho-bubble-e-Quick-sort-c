# Ordenação de Dados em C (Bubble Sort e Quick Sort)

## 1. Objetivo

Fazer programas em C que organizam informações do dia a dia usando dois algoritmos de ordenação: **Bubble Sort** e **Quick Sort**.

## 2. Situação-problema

Ordenar dados ajuda a enxergar melhor as informações. Neste trabalho foram usados dois exemplos:

- **Notas de estudantes:** 10 notas de uma turma, organizadas da menor para a maior, para ver o desempenho dos alunos.
- **Temperaturas do dia:** 10 temperaturas registradas ao longo do dia, organizadas da menor para a maior, para saber quais foram os momentos mais frios e mais quentes.

## 3. Arquivos

| Arquivo | O que faz |
|---|---|
| `MainBobble.c` | Ordena as temperaturas com Bubble Sort |
| `MainQuick.c` | Ordena as notas com Quick Sort |

Os dois programas mostram os dados **antes** e **depois** da ordenação.

## 4. Como executar

É preciso ter o compilador GCC instalado.

**Bubble Sort**

```
gcc MainBobble.c -o bubble
./bubble
```

**Quick Sort**

```
gcc MainQuick.c -o quick
./quick
```

No Windows, use `bubble.exe` e `quick.exe` no lugar de `./bubble` e `./quick`.

## 5. Como os algoritmos funcionam

### Bubble Sort

O Bubble Sort compara dois números vizinhos de cada vez. Se o primeiro for maior que o segundo, eles trocam de lugar. Isso se repete do início ao fim da lista. A cada volta, o maior número que sobrou "sobe" como uma bolha até o final. Repetindo esse processo várias vezes, a lista fica toda ordenada.

É simples de entender, mas fica lento quando a lista é muito grande.

### Quick Sort

O Quick Sort escolhe um número como **pivô** (neste trabalho, o último da lista). Depois, separa os outros números em dois grupos: os menores que o pivô ficam à esquerda e os maiores ficam à direita. O pivô fica na sua posição correta. Em seguida, o mesmo processo é repetido para o grupo da esquerda e para o grupo da direita, até tudo estar ordenado.

É bem mais rápido que o Bubble Sort na maioria dos casos.

## 6. Exemplo de resultado

**Bubble Sort (temperaturas)**

```
Antes:  21°C 19°C 18°C 24°C 31°C 33°C 28°C 25°C 23°C 22°C
Depois: 18°C 19°C 21°C 22°C 23°C 24°C 25°C 28°C 31°C 33°C
```

**Quick Sort (notas)**

```
Antes:  7, 4, 9, 2, 8, 6, 10, 3, 5, 6
Depois: 2, 3, 4, 5, 6, 6, 7, 8, 9, 10
```