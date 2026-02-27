//     *
//    ***
//   *****
//   *****
//    ***
//     *

#include <stdio.h>

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int st = 1; st <= 2*i - 1; st++)
            printf("*");
        printf("\n");
    };

    for(int i = n - 1; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int st = 1; st <= 2*i - 1; st++)
            printf("*");
        printf("\n");
    };

    return 0;
};