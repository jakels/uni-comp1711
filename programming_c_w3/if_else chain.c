#include <stdio.h>

int main(){
    int mark; //Initialise a mark variable
    int passMark; //Initialise a pass mark variable

    printf("Pleae enter a mark: \n"); 
    scanf("%d", &mark); //Take the score mark from the user

    printf("Pleae enter a pass mark: \n"); 
    scanf("%d", &passMark); //Take the pass mark from the user

    if (mark >= 0 && mark <= 100){
        if(mark == 0){ //Check if the mark is zero
            printf("The mark of %d is a zero.\n", mark);
        }
        else if (mark < passMark) //Check if under pass mark
        {
            printf("The mark of %d is a fail.\n", mark);
        }
        else //Otherwise its a pass
        {
            printf("The mark of %d is a pass\n", mark);
        }
    }
    else
    {
        printf("The mark of %d is out of the range of 0-100\n", mark);
    }
    

    return 0; //Return Success
}