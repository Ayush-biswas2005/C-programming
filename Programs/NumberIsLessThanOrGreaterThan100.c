#include <stdio.h>

main() {
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number<100)
        printf("The number is less than 100");
    else
        printf("The number is greater than 100");
}
