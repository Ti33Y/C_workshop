#include <stdio.h>

void main() {
    int n, i;
    float num, sum = 0, min, max, avg;

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Program Number\n");
    printf("++++++++++++++++++++++++++++++++++++\n");

    printf("Enter number total : ");
    scanf("%d", &n);

    printf("++++++++++++++++++++++++++++++++++++\n");

    for (i = 1; i <= n; i++) {
        printf("Number %d : ", i);
        scanf("%f", &num);

        sum += num;

        if (i == 1) {
            min = max = num; 
        } else {
            if (num < min) min = num;
            if (num > max) max = num;
        }
    }

    avg = sum / n;

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Minimum number is : %.2f\n", min);
    printf("Maximum number is : %.2f\n", max);
    printf("Sum number is : %.2f\n", sum);
    printf("Average number is : %.2f\n", avg);
    printf("++++++++++++++++++++++++++++++++++++\n");
}
