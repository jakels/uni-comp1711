#include <stdio.h> //Include standard input output library

int main() //Entry point function
{
    int a; //For loop index variable aka loop control variable

    for (a = 0; a < 5; a++) //For loop start at a and end at 5
    {
        printf("The value of a is %d\n", a); //Print the value of a
    }

    printf("The final value of a is %d\n", a); //Print the final value of a

    return 0; //Return success
}