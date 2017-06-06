#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight = 595;
    printf("If I eat a watermelon I will weight %d lbs\n", weight + 12);

    int a = 86;
    int b = 21;
    printf("%d \n", a/b);

    float c = 86.0;
    float d = 21.0;
    printf("%f\n", c/d);

    int widow = (4 + 2) * 6;
    printf("Result: %d\n", widow);


    int age, age2, age3, average;
    age = age2 = 4.0;
    printf("Enter your age\n");
    scanf("%f", &age3);
    average = (age + age2 + age3) / 3;
    printf("\n The average age is %f\n", average);


    float balance = 1000.00;
    balance *= 1.1;
    printf("Balance: %f \n", balance);
    balance *= 1.1;
    printf("Balance: %f \n", balance);
    balance *= 1.1;
    printf("Balance: %f \n", balance);



    return 0;
}
