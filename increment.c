#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tuna = 20;
    printf("%d\n", tuna);
    tuna++;
    printf("%d\n", tuna);

    int metroid = 1;
    metroid--;
    printf("%d\n", metroid);

    int a = 5, b = 10, answer = 0;
    answer = ++a * b;
    printf("Answer: %d\n", answer);

    a = 5, b = 10, answer = 0;
    answer = a++ * b;
    printf("Answer: %d\n", answer);
    return 0;
}
