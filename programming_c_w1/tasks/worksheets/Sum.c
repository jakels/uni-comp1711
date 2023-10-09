#include <stdio.h>

int main()
{
    int firstFactor;
    int secondFactor;

    printf("Enter two numbers to add :");
    scanf("%d", &firstFactor);
    printf(" + ");
    scanf("%d", &secondFactor);

    printf("Sum : %d\n", (firstFactor + secondFactor));
    return 0;
}