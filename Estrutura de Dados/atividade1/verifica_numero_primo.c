#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) {
        int n = atoi(argv[i]);
        int resultado = 0;

        if (n == 0 || n == 1) {
            printf("O numero %d nao eh primo\n", n);
            continue;
        }

        for (int j = 2; j <= n / 2; j++) {
            if (n % j == 0) {
                resultado++;
                break;
            }
        }

        if (resultado == 0) {
            printf("O numero %d eh primo\n", n);
        } else {
            printf("O numero %d nao eh primo\n", n);
        }
    }

    return 0;
}
