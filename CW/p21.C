// A B C D
// A B C D
// A B C D

#include <stdio.h>

int main() {
    int rows = 3, cols = 4;

    for(int i = 1; i <= rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%c ", 'A' + j);
        };
        printf("\n");
    };
    return 0;
};
