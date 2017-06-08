#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("pink.txt", "a");
    char singleLine[150];
    fprintf(fPointer, "\n-Joshua");
    fclose(fPointer);
    return 0;
}
