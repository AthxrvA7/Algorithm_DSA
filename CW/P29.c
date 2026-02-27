// *   *   *
//   *   *
// *   *   *

#include <stdio.h>

int main() {
    int rows = 3, cols = 9;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if((i + j) % 4 == 0 || (i == 1 && j % 4 == 2))
                printf("*");
            else
                printf(" ");
        };
        printf("\n");
    };
    return 0;
};