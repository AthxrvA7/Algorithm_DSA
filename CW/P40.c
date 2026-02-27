// 1 0 0 0
// 0 2 0 0
// 0 0 3 0
// 0 0 0 4

#include <stdio.h>

int main() {
    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                printf("%d ", i + 1);
            else
                printf("0 ");
        };
        printf("\n");
    };
    return 0;
};
