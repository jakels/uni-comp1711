#include <stdio.h>

int main()
{
    int a = 0; //Declare loop control varaible

    while(a < 5) //Loop while a is less than 5
    {
        printf("The value of a is %d\n", a); //Print the value of a in the loop
        a++; //Increment a
    }
    printf("The final value of a is %d\n", a); //Print the final value of a

    return 0; //Return success code
}