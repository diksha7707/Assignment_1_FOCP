#include <stdio.h>

void printpattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printpattern(n);

    return 0;
}