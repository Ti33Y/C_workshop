#include <stdio.h>
void main() {
    char name[50];
    float carNo, time, rate;
    printf("++++++++++++++++++++++++++\n");
    printf("    Program Rent Texi\n"); 
    printf("++++++++++++++++++++++++++\n");
    printf("Enter name for rent : "); 
    scanf("%s", name);
    printf("Enter car number for rent : ");
    scanf("%f", &carNo);
    printf("Enter hour for rent : ");
    scanf("%f", &time);
    
    if (time<5)
    {
       rate = time * 100.00;
    }
    else if (time>= 5 && time <= 10)
    {
       rate = time * 90.50;
    }
    else if (time>= 11 && time <= 15)
    {
       rate = time * 80.00;
    }
    else // time>=16
    {
       rate = time * 70.50;
    }
    printf("++++++++++++++++++++++++++\n");
    printf("Pay for rent : %.2f\n", rate);
    printf("++++++++++++++++++++++++++\n");

}