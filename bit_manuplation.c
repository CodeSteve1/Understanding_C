#include <stdio.h>
#define reg 'a';               //initialising variable 
#define set_bit(x,y) x|=(1<<y); // macro function to set the y+1th bit to 1
#define clear_bit(x,y) x&=(1<<y); // macro function to clear the y+1th bit to 0
int main()
{
    char arbit = reg; //setting a arbitary variable 
    set_bit(arbit,2);  //calling macro function to set variable arbit's 3rd bit value
    printf("After setting 3rd bit: %c\n", arbit);//printing arbit after setting

…        printf("5th bit is not set.\n");
    }

    return 0;
}
