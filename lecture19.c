//loop
#include<stdio.h>
void main(){
    int x=1,y=1,z;
    while (x <= 500)
    {
        printf("Hello...\n");
        x = x + 100;
    }

    do
    {
       printf("Hey...\n");
       y++;
    } 
    while (y <= 5);

    for ( z = 1; z <= 5; z++)
    {
        printf("Hi...\n");
    }
    


    
}