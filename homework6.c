#include <stdio.h>

void main() {
    int totalRooms = 10;
    float waterRate = 12.50, electricRate = 8.00;
    char name[50];
    float rent, waterUnits, electricUnits, totalPay;

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Program Rent Room\n");
    printf("++++++++++++++++++++++++++++++++++++\n");

    for (int i = 1; i <= totalRooms; i++) {
        printf("Room No. %d\n", i);
        printf("Enter name : ");
        scanf(" %49s", name);

        if (name[0] == 'x'&& name[1] == '\0') {
            printf("------------------------------------\n");
            continue;
        }

        printf("Enter rent per room : ");
        scanf("%f", &rent);

        printf("Enter unit water use : ");
        scanf("%f", &waterUnits);

        printf("Enter unit electric use : ");
        scanf("%f", &electricUnits);

        totalPay = rent + (waterUnits * waterRate) + (electricUnits * electricRate);

        printf("Pay money total for rent room : %.2f\n\n", totalPay);
        printf("------------------------------------\n");
    }

    printf("++++++++++++++++++++++++++++++++++++\n");
}
