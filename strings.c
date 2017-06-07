#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    char a = 's';
    char b = 'a';
    char c = 'c';

    printf("%c\n", toupper(a) );
    printf("%c\n", toupper(b) );
    printf("%c\n", toupper(c) );

    char ham[100] = "My rough";
    strcat(ham, " shampoo");
    printf("%s \n", ham);

    strcpy(ham, "Bucky is awesome!");
    printf("%s \n", ham);

    char bountyhuners[50];
    char bountyhunterfood[25];
    char sentence[75] = "";
    printf("Enter a name: ");
    gets(bountyhuners);

    printf("Enter a food item: ");
    gets(bountyhunterfood);

    strcat(sentence, bountyhuners);
    strcat(sentence, " loves to eat ");
    strcat(sentence, bountyhunterfood);
    puts(sentence);

    return 0;
}
