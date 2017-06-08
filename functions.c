#include <stdio.h>
#include <stdlib.h>
void printSomething();

int main()
{
    printSomething();
    printSomething();
    printSomething();
    return 0;
}

void printSomething(){
    printf("Duh I am a function!");
    return;
}
