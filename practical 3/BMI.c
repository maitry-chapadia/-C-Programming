#include<stdio.h>
void main()
{
float weight;
float height;
float BMI;
printf("entre your height(in meters):\n");
scanf("%f",&height);
printf("entre your weight(in kilogram):\n");
scanf("%f",&weight);
BMI=weight/(height*height);
printf("\n your BMI is %f", BMI);
return 0;
}
