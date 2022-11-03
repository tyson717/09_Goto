#include <stdio.h>

int main() {
    beginning:
    printf("Do you really want to print Hello World?\n");
    printf("Enter 'y' to say yes, and 'n' to say no: ");
    char choice;
    scanf(" %c", &choice);

    if (!(choice == 'y' || choice == 'n')) {
        printf("Invalid input!\n");
        goto beginning;
    }

    if (choice == 'y') {
        printf("Hello World!\n");
    }


    return 0;
}
