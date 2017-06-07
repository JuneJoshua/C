#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    int falchion = 19;
    int * pfalchion = &falchion;
    printf("%p \t %s \t %d \n", &falchion, "falchion", falchion);
    printf("%p \t %s \t %d \n", &pfalchion, "pfalchion", pfalchion);

    printf("\n*pfalchion: %d\n", *pfalchion);

    *pfalchion = 71;
    printf("\n*pfalchion: %d \n", *pfalchion);
    return 0;
}
