#include <stdio.h>

int main() {
    char status;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Enter status for order %d (V/I/S): ", i);
        scanf(" %c", &status);

        if (status == 'I' || status == 'i') {
            printf("Skipping order %d\n", i);
            continue;
        }

        if (status == 'S' || status == 's') {
            printf("Stopping at order %d\n", i);
            break;
        }

        if (status == 'V' || status == 'v') {
            printf("Processing order %d\n", i);
        }
    }

    return 0;
}
