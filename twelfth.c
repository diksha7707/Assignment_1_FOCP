#include <stdio.h>

void printpattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d", i * j);

            if(j < n) {
                printf(" ");
            }
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