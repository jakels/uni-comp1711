#include <stdio.h>
int main()
{
    int arraySize;
    printf("Enter the length of string be reversed: ");
    scanf("%d", &arraySize);

    char string[arraySize];
    char reversedString[arraySize];

    printf("Enter a string to be reversed: ");
    scanf("%s", string);

    for (size_t i = 0; i < sizeof(string); i++)
    {
        reversedString[i] = string[arraySize - 1 - i];
    }

    printf("Reversed string: %s\n", reversedString);
    
    return 0;
}