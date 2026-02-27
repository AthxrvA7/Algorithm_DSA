// 1
// 01
// 101
// 0101

#include <stdio.h>

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2);
        };
        printf("\n");
    };
    return 0;
};