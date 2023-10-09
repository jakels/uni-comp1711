#include <stdio.h>
int main()
{
    int lengthSideOne;
    int lengthSideTwo;
    int calculatedArea;
    
    printf("Please input the length of side one: ");
    scanf("%d", &lengthSideOne);
    printf("Please input the length of side two: ");
    scanf("%d", &lengthSideTwo);
    calculatedArea = lengthSideOne * lengthSideTwo;

    printf("The area of the rectangle is %d\n", calculatedArea);

    return 0;
}