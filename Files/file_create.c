#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("pink.txt", "w");
    fprintf(fPointer, "I love this song!\n");
    fclose(fPointer);
    return 0;
}
