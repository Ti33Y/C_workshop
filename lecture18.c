#include<stdio.h>
void main(){
    int busNO;
    printf("Input Bus Number : ");
    scanf("%d",&busNO);
    printf("-------------------\n");

    if (busNO==3)
    {
        printf("Go to Sanamlug");
    }
    else if (busNO==888)
    {
        printf("Go to Pinkloa");
    }
    else if (busNO==715)
    {
        printf("Go to Oam Noi");
    }
    else if (busNO==716)
    {
        printf("Go to wat rai king");
    }
    else
    {
        printf("Don't have data");
    }

}