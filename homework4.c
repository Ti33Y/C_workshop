#include <stdio.h>

void main() {
    char name[50];
    char phone[20];
    int people;
    float price, total;

    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t    Program Package Tour\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("Enter name of head group  : ");
    scanf("%s", name);

    printf("Enter telephone of head group : ");
    scanf("%s", phone);

    printf("Enter number of group: ");
    scanf("%d", &people);

    if (people >= 1 && people <= 2) {
        price = 300;
    } else if (people >= 3 && people <= 5) {
        price = 250;
    } else if (people >= 6 && people <= 10) {
        price = 210;
    } else {
        price = 150;
    }

    total = price * people;

    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Pay for package tour is : %.2f\n", total);
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
}
