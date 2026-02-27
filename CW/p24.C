// EDCBA
// EDCB
// EDC
// ED
// E

#include <stdio.h>

int main() {
    int n = 5;

    for(int i = n; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + n - 1 - j);
        };
        printf("\n");
    };
    return 0;
};
