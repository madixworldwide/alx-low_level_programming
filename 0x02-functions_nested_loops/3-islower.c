#include "main.h"
#include <stdio.h>

int main() {
    char ch = 'a';
    if (_islower(ch)) {
        printf("%c is a lowercase alphabet.\n", ch);
    } else {
        printf("%c is not a lowercase alphabet.\n", ch);
    }

    return 0;
}

