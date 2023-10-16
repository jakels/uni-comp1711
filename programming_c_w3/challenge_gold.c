#include <stdio.h>

int main()
{
    int runLoop = 1;

    while (runLoop == 1)
    {
        int validate;
        printf("Please enter an input to validate: ");
        scanf("%d", &validate);

        switch (validate)
        {
            case -1:
                runLoop = 0;
                break;

            default:
                if (validate >= 0 && validate <= 100)
                {
                    printf("The value of %d is valid\n", validate);
                }
                else
                {
                    printf("The value of %d is outside the range 0-100\n", validate);
                }
                break;
        }
    }
}