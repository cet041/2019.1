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

    /* Declaração de variáveis */
    float x, y, z;
    float resultado2;

    printf("Por-favor digite 3 floats separados por espaço:\n");
    scanf("%f %f %f", &x, &y, &z);

    resultado2 = x + y + z;
    printf("O resuldado eh: %f\n", resultado2);

    return 0;
}
