#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    int falchion = 19;
    printf("Address     \t   Name \t Value\n");
    printf("%p \t %s \t %d \n", &falchion, "falchion", falchion);

    int * pfalchion = &falchion;
    printf("%p \t %s \t %d \n", &falchion, "falchion", falchion);
    printf("%p \t %s \t %d \n", &pfalchion, "pfalchion", pfalchion);
    return 0;
}
