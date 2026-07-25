#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("Entre com o valor da nota 1:\n");
    scanf("%f", &n1);
    printf("Entre com o valor da nota 2:\n");
    scanf("%f", &n2);
    printf("Entre com o valor da nota 3:\n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    if (media >= 8){
        printf("Aprovado:\n");
    }
    else {
        printf("Reprovado\n");
    }
}