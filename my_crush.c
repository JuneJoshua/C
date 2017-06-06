#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[20];
    char crush[20];
    int numberOfHearts;

    printf("What is your name? \n");
    scanf("%s", firstName);

    printf("Who is your crush? \n");
    scanf("%s", crush);

        printf("%s and %s are crushes\n", firstName, crush);

    return 0;
}
