// 1 2 3 4 5
// 1       5
// 1       5
// 1 2 3 4 5

#include <stdio.h>

int main() {
    int rows = 4, cols = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            if(i == 1 || i == rows || j == 1 || j == cols)
                printf("%d ", j);
            else
                printf("  ");
        };
        printf("\n");
    };
    return 0;
};

