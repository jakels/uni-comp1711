#include <stdio.h> //Include standard IO library
int main(){ //Entry point function
    char name[15]; //15 length array of characters to hold name

    printf("Hello, please enter your name :"); //User provided message to ask for name
    scanf("%s", name); //Get input from user keyboard
    printf("Hello, %s\n", name); //Print greeting
    return 0; // Return success
}