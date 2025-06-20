#include <stdio.h>
void main() {
    char name[50];
    float money, interest, rate;
    printf("+++++++++++++++++++++++++++++\n");
    printf("   Program Benefit of Loan\n");
    printf("+++++++++++++++++++++++++++++\n");
    printf("Enter name of loan : ");
    scanf("%s", &name);

    printf("Enter money of loan : ");
    scanf("%f", &money);

    if (money > 1000)
        rate = 2.5;
    else
        rate = 5.5;

    interest = (money * rate) / 100;
    printf("+++++++++++++++++++++++++++++\n");

    printf("Benefit of loan is : %.2f\n", interest);
    printf("+++++++++++++++++++++++++++++\n");
    
}
