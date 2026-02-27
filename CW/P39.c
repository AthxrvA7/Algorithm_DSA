// A B C D
// E F G H
// I J K L
// M N O P

#include <stdio.h>

int main() {
    int n = 4;
    char ch = 'A';

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c ", ch++);
        };
        printf("\n");
    };
    return 0;
};
