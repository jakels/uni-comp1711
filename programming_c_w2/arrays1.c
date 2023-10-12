#include <stdio.h>

int main()
{
    int a[10]; //Make an array of size 10
    int count; //Declare a loop control variable

    //populate the array
    for (count = 0; count < 10; count++)
    {
        a[count] = count * 10 + count; //Populate array at index
        printf("Element #%d = %d\n", count, a[count]); //Display array element using conventional variable reference
        printf("Via pointer : %d\n" , *(a+count)); //Display array element using pointer
    }

    return 0; //Return success
}