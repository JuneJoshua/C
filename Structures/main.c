#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
int main()
{
    struct user Bucky;
    struct user Emily;

    Bucky.userID = 1;
    Emily.userID = 2;

    puts("Enter the first name of user 1");
    gets(Bucky.firstName);

    puts("Enter the first name of user 2");
    gets(Emily.firstName);

    printf("USER 1 id is %d\n", Bucky.userID);
    printf("USER 2 first name is %s\n", Emily.userID);
    return 0;
}
