#include <stdio.h>

// Função para trocar duas notas de posição
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que organiza os elementos ao redor de um pivô
int particionar(int notas[], int baixo, int alto) {
    int pivo = notas[alto]; 
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        
        if (notas[j] <= pivo) {
            i++;
            trocar(&notas[i], &notas[j]);
        }
    }
    trocar(&notas[i + 1], &notas[alto]);
    return (i + 1);
}


void quickSort(int notas[], int baixo, int alto) {
    if (baixo < alto) {
        // Encontra a posição correta do pivô
        int pi = particionar(notas, baixo, alto);

        // Ordena recursivamente a parte esquerda e a parte direita
        quickSort(notas, baixo, pi - 1);
        quickSort(notas, pi + 1, alto);
    }
}


void exibirNotas(int notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d", notas[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf("\n\n");
}

int main() {
   
    int notas[10] = {7, 4, 9, 2, 8, 6, 10, 3, 5, 6};
    int tamanho = 10;

    printf("=========================================\n");
    printf("   NOTAS DE ALUNOS (QUICK SORT)          \n");
    printf("=========================================\n\n");

    // Apresentar os dados antes da ordenação
    printf("Notas antes da ordenacao:\n");
    exibirNotas(notas, tamanho);

    // Aplica o Quick Sort do índice 0 até o 9
    quickSort(notas, 0, tamanho - 1);

    // Apresentar os dados depois da ordenação
    printf("Notas apos a ordenacao (Crescente):\n");
    exibirNotas(notas, tamanho);

    return 0;
}