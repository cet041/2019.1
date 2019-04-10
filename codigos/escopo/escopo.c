#include <stdio.h>

int x = 10;

int main() {
    int x = 2;
    printf("%d x do main\n", x);

    if(x == 2) {
        int x = 5;
        printf("%d x do if\n", x);
    }

    {
        int x = 20;
        printf("%d x do escopo anomimo\n", x);
    }
}
