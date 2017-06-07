#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    char movie1[20];
    char * pmovie = movie1;
    fgets(pmovie, 20, stdin);
    puts(pmovie);

    return 0;
}
