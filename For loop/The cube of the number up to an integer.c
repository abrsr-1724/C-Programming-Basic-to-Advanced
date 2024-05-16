#include<stdio.h>
int main() {
    int num, cube;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Cubes of numbers up to %d:\n", num);

    for (int i = 1; i <= num; i++) {
        cube = i * i * i;
        printf("%d^3 = %d\n", i, cube);
    }

    return 0;
}