#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("Enter height in meter:");
    scanf("%f",&h);
    printf("Enter weight in kg:");
    scanf("%f",&w);
    bmi=w/(h*h);
    printf("Your Body Mass Index(BMI):%f\n", bmi);
    (bmi < 15)?printf("Your BMI category is: Starvation\n"):bmi;
    (bmi >= 15.1 && bmi <= 17.5)?printf("Your BMI category is: Anorexic\n"):bmi;
    (bmi >= 17.6 && bmi <= 18.5)?printf("Your BMI category is: Underweight\n"):bmi;
    (bmi >= 18.6 && bmi <= 24.9)?printf("Your BMI category is: Ideal\n"):bmi;
    (bmi >= 25 && bmi <= 25.9)?printf("Your BMI category is: Overweight\n"):bmi;
    (bmi >= 30 && bmi <= 30.9)?printf("Your BMI category is: Obese\n"):bmi;
    (bmi >= 40)?printf("Your BMI category is: Morbidly Obese\n"):bmi;
}
