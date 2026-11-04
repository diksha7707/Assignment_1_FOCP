#include <stdio.h>

void printpattern(int row, int col) {
    for(int i = row; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printpattern(n, n);

    return 0;
}
