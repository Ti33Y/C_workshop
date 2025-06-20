#include <stdio.h>

void main() {
    
    float homeNo,unit, total;

    printf("--------------------------\n");
    printf("   Program Pay Electric\n");
    printf("--------------------------\n");

    printf("Enter home number : ");
    scanf("%f", &homeNo);

    printf("Enter unit used : ");
    scanf("%f", &unit);

    if (unit <= 20) {
        total = unit * 5.00;
    } else if (unit <= 50) {
        total = unit * 4.50;
    } else {
        total = unit * 4.00;
    }

    printf("--------------------------\n");
    printf("Total to pay : %.2f\n", total);
    printf("--------------------------\n");
}
