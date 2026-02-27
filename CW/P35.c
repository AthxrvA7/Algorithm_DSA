// 2 4 6 8
// 2 4 6 8
// 2 4 6 8
// 2 4 6 8

#include <stdio.h>

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        int even = 2;
        for(int j = 1; j <= n; j++) {
            printf("%d ", even);
            even += 2;
        };
        printf("\n");
    };
    return 0;
};