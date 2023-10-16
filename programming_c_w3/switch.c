#include <stdio.h>

int main()
{
    int option; // Initialise an option variable

    printf("Pleae enter an option: \n");
    scanf("%d", &option); // Take the option from the user

    switch (option) // Switch dependant on the option variable
    {
        case 0: // Option == 0
            printf("Option zero\n");
            break;

        case 1: // Option == 1
            printf("Option one\n");
            break;

        default: // Else
            printf("Please select a valid option, zero or one\n");
            break;
    }

    return 0; // Return Success
}