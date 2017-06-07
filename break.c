#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    int a;
    int howMany;
    int maxAmount = 10;

    printf("How many times? (Up to 10)");
    scanf(" %d", &howMany);
    for(a=1; a<=maxAmount; a++){
        printf("%d\n", a);
        if(a==howMany){
            break;
        }
    }

    return 0;
}
