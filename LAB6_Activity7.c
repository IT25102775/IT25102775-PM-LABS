#include <stdio.h>

int main() {
    int count = 5;

    while (count >= 0) {
        printf("%d\n", count);
        count--;    // Decrement to avoid an infinite loop
    }

    printf("Countdown complete.\n");

    return 0;
}
