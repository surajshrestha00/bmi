//BMI CALCULATOR TASK 1
#include <stdio.h>
int main()
{
    float w,h,bmi;

    printf("Enter your weight in kg: ");
    scanf("%f", &w);

    printf("Enter your height in meters: ");
    scanf("%f", &h);

    bmi = w / (h * h);

    printf("Your BMI is: %f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } 
    else if (bmi < 25) {
        printf("You are normal weight.\n");
    } 
    else {
        printf("You are overweight.\n");
    }
}