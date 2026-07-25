#include <stdio.h>

int main(){
    int _d, _h;
    printf("Entre com um valor de 1 a 7: \n");
    scanf("%d", &_d);
    printf("Entre com o periodo: 1 = manha, 2 = tarde , 3 = noite \n");
    scanf("%d", &_h);
    switch (_d)
    {
    
    case 1:
    printf("Domingo.\n");

    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;
    case 2:
    printf("Segunda-Feira.\n");
    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;
    case 3:
    printf("Terca-Feira.\n");
    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;   
    case 4:
    printf("Quarta-Feira.\n");
    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;
    case 5:
    printf("Quinta-Feira.\n");
    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;
    case 6:
    printf("Sexta-Feira.\n");
    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;
    case 7:
    printf("Sabado.\n");
    if (_h == 1) {
        printf("Periodo Manha.\n");
    }

    if (_h == 2) {
        printf("Periodo Tarde.\n");
    }

    if (_h == 3) {
        printf("Periodo Noturno.\n");
    }
        break;
    default:
    printf("Numero invalido\n");
        break;;       

    }

}