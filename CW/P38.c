// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7

#include <stdio.h>

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = i; j < i + n; j++) {
            printf("%d ", j);
        };
        printf("\n");
    };
    return 0;
};
