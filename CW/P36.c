// A A A A
// B B B B
// C C C C
// D D D D

#include <stdio.h>

int main() {
    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c ", 'A' + i);
        };
        printf("\n");
    };
    return 0;
};