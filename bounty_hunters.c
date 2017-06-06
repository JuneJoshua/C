#include <stdio.h>
#include <stdlib.h>
int main()
{
    char gender;
    if(4 < 10){
        printf("I like Bounty Hunters!\n");
        printf("What is yout gender? (m/f)\n");
        scanf(" %c", &gender);
        if (gender == 'm'){
            printf("You are male!");
        }
        if (gender == 'f'){
            printf("You are female!\n");
        }
    }
    return 0;
}
