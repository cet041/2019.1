#include <stdio.h>

int main() {

    /* Declaraçlao de variáveis */
    int a, b, c;
    int resultado;

    printf("Por-favor digite 3 inteiros separados por espaço:\n");
    scanf("%d %d %d", &a, &b, &c);

    /* somando as variáveis */
    resultado = a + b + c;

    /* imprimindo resultado na tela */
    printf("O resultado eh: %d\n", resultado);

    return 0;
}
