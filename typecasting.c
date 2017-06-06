#include <stdio.h>
#include <stdlib.h>
int main()
{
    float avgProfit;
    int pumpkin = 10;
    int sales = 59;
    int days = 7;

    avgProfit = ((float)pumpkin * (float)sales) / (float)days;
    printf("Average daily profit: $%.2f\n", avgProfit);
    return 0;
}
