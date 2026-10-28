#include <stdio.h>

/* 
 * fazendo as temperaturas maiores irem para o final da lista (ordem crescente).
 */
void bubbleSort(int temperaturas[], int tamanho) {
    int i, j, temp;

    // Laço externo: controla o número de passagens
    for (i = 0; i < tamanho - 1; i++) {
        
        // Laço interno: compara os elementos vizinhos
        for (j = 0; j < tamanho - i - 1; j++) {
            
            // Se a temperatura atual for maior que a próxima, troca de lugar
            if (temperaturas[j] > temperaturas[j + 1]) {
                temp = temperaturas[j];
                temperaturas[j] = temperaturas[j + 1];
                temperaturas[j + 1] = temp;
            }
        }
    }
}

// Função auxiliar para exibir as temperaturas na tela
void exibirTemperaturas(int temperaturas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d°C ", temperaturas[i]);
    }
    printf("\n\n");
}

int main() {
    // Conjunto com 10 registros contendo apenas as temperaturas
    int temperaturas[10] = {21, 19, 18, 24, 31, 33, 28, 25, 23, 22};
    int tamanho = 10;

    printf("=========================================\n");
    printf("   REGISTRO DE TEMPERATURAS (BUBBLE SORT)\n");
    printf("=========================================\n\n");

    // Apresentar os dados antes da ordenação
    printf("Temperaturas antes da ordenacao:\n");
    exibirTemperaturas(temperaturas, tamanho);

    // Aplica o Bubble Sort
    bubbleSort(temperaturas, tamanho);

    // Apresentar os dados depois da ordenação
    printf("Temperaturas apos a ordenacao (Crescente):\n");
    exibirTemperaturas(temperaturas, tamanho);

    return 0;
























}