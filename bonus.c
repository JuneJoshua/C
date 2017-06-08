#include <stdio.h>
#include <stdlib.h>
int calculateBonus(int yearsWorked);
int main(){

    int buckyBonus = calculateBonus(14);
    int emaBonus = calculateBonus(3);
    printf("Bucky gets $%d\n", buckyBonus);
    printf("Ema gets $%d\n", emaBonus);
    return 0;
}

int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;
    if(yearsWorked > 10){
        bonus += 1000;
    }

    return bonus;
}
