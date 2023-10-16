#include <stdio.h>

int main(){
    int mark = 40; //Initialise a mark variable

    if(mark >= 40){ //If the mark is greater than or equal to 40 then its a pass
        printf("The mark of %d is a pass.\n", mark);
    }
    else
    {
        printf("The mark of %d is a fail.\n", mark);
    }

    return 0; //Return Success
}