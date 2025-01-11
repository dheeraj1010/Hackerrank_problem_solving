#include<stdio.h>
int main()
{
	
	float w,h,bmi;
	printf(" to calculate BMI and BMI category\n\n");
	printf("enter your weight in kg = ");
 scanf("%f",&w);
 printf("enter your hieght in metre =");
 scanf("%f",&h);
 
 bmi=w/(h*h);
 if(bmi<15)
 printf("BMI category = starvation ");
 else if(bmi>=15.1&&bmi<=17.5)
 printf("BMI category = Anorexic");
 else if(bmi>=17.6&&bmi<=18.5)
 printf("BMI category = underweight");
 else if(bmi>=18.6&&bmi<=24.9)
 printf("BMI category =Ideal");
 else if(bmi>=25&&bmi<=25.9)
 printf("BMI category = Overweight");
 else if(bmi>=30&&bmi<=30.9)
 printf("BMI category = obese");
 else if(bmi>=40)
 printf("BMI category = Obese");
 return 0;
 
}
