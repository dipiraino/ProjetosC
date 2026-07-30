#include <stdio.h>
#include <unistd.h>

int main() {
    int i;

    for (i = 0; i <= 10; i++) {
        printf("%d\n", i);
        sleep(1); // Espera 1 segundo
    }

    return 0;
}