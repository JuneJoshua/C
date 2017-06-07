#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    char grade = 'A';
    switch(grade){
        case 'A' : printf("Sweet!\n");
                    break;
        case 'B' : printf("!\n");
                    break;
        default   : printf("?\n");
    }
    return 0;
}
