#include <stdio.h>
#define LINE printf("+++++++++++++++++++++++\n");

double vat = 0.7;

void calAndShowVat(double price){
    printf("vat of %.2f is %.2f \n" , price, price*vat);
}

void main(){
     LINE
     printf("Hello....\n");
     LINE
     calAndShowVat(100);
     LINE
}

void showHi(){
     printf("Hi...");
}