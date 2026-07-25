#include <stdio.h>
#include <locale.h>
int main (){
    int _num1, _num2, soma;
    printf("Entre com valor 1\n\n");
    scanf ("%d", &_num1);
    printf("Entre com valor 2\n\n");
    scanf ("%d", &_num2);
    soma = _num1 + _num2;

    printf("O valor e: %d\n", soma);

    return 0;
}