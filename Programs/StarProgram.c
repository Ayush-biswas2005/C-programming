#include <stdio.h>

int main() {
    int rows;

    // Taking input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Inner loop to print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}