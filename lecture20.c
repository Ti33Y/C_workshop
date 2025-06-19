#include<stdio.h>
void main(){
    int i;
    for  (i = 1; i <= 10; i++)
    {
        printf("Hello...\n");
        if (i==5){
            continue;
        }
         printf("Hi...\n");
    }
    
}