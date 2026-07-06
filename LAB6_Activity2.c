#include <stdio.h>

int main() {
    float wt_lb, ht_in, bmi;

    printf("Enter weight (lb): ");
    scanf("%f", &wt_lb);

    printf("Enter height (in): ");
    scanf("%f", &ht_in);

    bmi = (wt_lb / (ht_in * ht_in)) * 703;

    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal weight\n");
    else if (bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
