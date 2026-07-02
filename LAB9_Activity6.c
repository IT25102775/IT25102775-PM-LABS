#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define DOB_SIZE 15

int main() {
    char nameInput[100], dobInput[100];
    char name[NAME_SIZE], dob[DOB_SIZE];

    while (1) {
        
        printf("Enter patient name: ");
        fgets(nameInput, sizeof(nameInput), stdin);
        nameInput[strcspn(nameInput, "\n")] = '\0';  

        
        if (strlen(nameInput) >= NAME_SIZE) {
            printf("Error: Name input exceeds buffer size. Try again.\n\n");
            continue;
        }

        
        strncpy(name, nameInput, NAME_SIZE - 1);
        name[NAME_SIZE - 1] = '\0'; 

        printf("Enter date of birth (YYYY-MM-DD): ");
        fgets(dobInput, sizeof(dobInput), stdin);
        dobInput[strcspn(dobInput, "\n")] = '\0';

        if (strlen(dobInput) >= DOB_SIZE) {
            printf("Error: DOB input exceeds buffer size. Try again.\n\n");
            continue;
        }

       
        strncpy(dob, dobInput, DOB_SIZE - 1);
        dob[DOB_SIZE - 1] = '\0';

      
        printf("\nData saved successfully.\n");
        printf("Name: %s, Date of Birth: %s\n", name, dob);
        break;
    }

    return 0;
}
