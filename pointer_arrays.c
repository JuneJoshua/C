#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    int i;
    int meatBalls[5] = {1, 55, 34, 77, 933};
    printf("Element \t Address \t       Value \n");
    for(i= 0; i < 5; i++)
    {

        printf("meatballs[%d] \t %p \t %d\n",i, &meatBalls[i]);
    }
    printf("\n meatballs \t\t %p \n", meatBalls);
    printf("\n meatballs \t\t %p \n", *meatBalls);
    printf("\n meatballs \t\t %p \n", *(meatBalls + 2));
    return 0;
}
