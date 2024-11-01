#include "sched_cnf.h"
#include <stdio.h>

int main()
{
    
    void (*Rnd_rbn[])(void) = {R1, R2, R3, R4};

    
    for (int i = 0; i < 4; i++)
    {
        Rnd_rbn[i](); 
    }

    return 0;
}