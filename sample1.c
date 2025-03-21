#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc > 1) {
        system(argv[1]);
    } else {
        printf("Usage: %s <command>\n", argv[0]);
    }
    return 0;
}