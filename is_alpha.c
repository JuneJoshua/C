#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    int tuna = '9';
    if(isalpha(tuna)){
        printf("%c is a letter!\n", tuna);
    }else{
        if(isdigit(tuna)){
            printf("%c is a number!\n", tuna );
        }

    }

    return 0;
}
