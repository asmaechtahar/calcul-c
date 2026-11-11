#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b;
    printf("bienvenu tous le monde!\n");
    printf("\n donner deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("la somme de %d et %d est : %d\n", a, b, a+b);
    return 0;
}