#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}

