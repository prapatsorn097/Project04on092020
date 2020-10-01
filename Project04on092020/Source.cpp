#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter Number Of Rows You Want: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = i; j <= rows; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}