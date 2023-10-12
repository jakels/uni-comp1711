#include <stdio.h> //Include the standard IO library
int main(){ //Entry point function
    int age; //Create int varaible to hold age 

    printf("Hello, please enter your age: "); //Tell user to give age
    scanf("%d", &age); //Get user input and store in the age variable via memory location reference
    printf("Hello, your age is %d\n", age); //Print greeting

    return 0; //Return success
}