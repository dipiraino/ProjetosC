#include <stdio.h>
#include <stdlib.h>
int main(){
    int notas[10]; //tamanho do vetor
    int i; // contador
    for (i = 0; i < 10; i++){ //laço para fazer a contagem
        printf("Digite a nota do aluno %d\n", i);
        scanf("%d", &notas[i]);
    }
    return 0;
}