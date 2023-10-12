#include <stdio.h>

int main()
{
    char standardString[] = "test1";
    char reversedString[sizeof(standardString)];

    printf("Size of array : %d\n", sizeof(standardString));

    for (int i = (sizeof(standardString) - 1); i >= 0; i--)
    {
        printf("Character at %d is %c\n", i, standardString[i]);
        reversedString[(sizeof(standardString) - 1) - i] = standardString[i];
    }
    
    printf("Reversed string : %s\n", reversedString);
    return 0;
}