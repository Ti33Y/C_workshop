//input statement
//gets() -> stdio.h รับค่าข้อความ
 
#include <stdio.h>
 
void main(){
    char nickname1[100], nickname2[100], nickname3[100];
 
    printf("Input your nickname 1 : ");
    gets(nickname1);
    printf("Nickname 1 is %s\n", nickname1);  
 
    printf("----------------------------\n");
 
    printf("Input your nickname 3 : ");
    gets(nickname3);
    printf("Nickname 3 is %s\n", nickname3);
 
    printf("----------------------------\n");
 
    printf("Input your nickname 2 : ");
    scanf("%s" ,&nickname2);
    printf("Nickname 2 is %s\n", nickname2);    
}