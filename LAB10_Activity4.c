#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 200

int main() {
    char lines[MAX_LINES][MAX_LENGTH];
    char output[MAX_LENGTH + 20];
    int count = 0;

    printf("Enter text (press Enter on an empty line to stop):\n");

    while (count < MAX_LINES) {
        fgets(lines[count], MAX_LENGTH, stdin);

        
        if (strcmp(lines[count], "\n") == 0) {
            break;
        }

       
        lines[count][strcspn(lines[count], "\n")] = '\0';

        count++;
    }

    printf("\nNumbered List:\n");

    for (int i = 0; i < count; i++) {
        sprintf(output, "%d. %s", i + 1, lines[i]);
        printf("%s\n", output);
    }

    return 0;
}
