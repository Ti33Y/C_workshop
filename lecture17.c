//ตย. โปรแกรมตรวจสอบสายรถเมย์
#include <stdio.h>
void main(){
    int busNO;
    printf("Input Bus Number : ");
    scanf("%d",&busNO);
    printf("-------------------\n");

    switch (busNO)
    {
    case 3 : printf("Go to Sanamlug"); break;
    case 888 : printf("Go to Pinkloa"); break;    
    case 715 : printf("Go to Oam Noi"); break;    
    case 716 : printf("Go to wat rai king"); break;
    default:printf("Don't have data");
    
    }

}