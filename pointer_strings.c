#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    char movie1[] = "The Curse of the Black Pearl";
    char * movie2 = "Star Wars: The Force Awakens";
    puts(movie2);
    movie2 = "New movie title";
    puts(movie2);
    return 0;
}
