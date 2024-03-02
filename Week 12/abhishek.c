#include<stdio.h>
main()
{
float fahrenheit, celsius;
printf("Enter temperature in fahreheit\n");
scanf ("%f",&fahrenheit);
celsius=(fahrenheit-32)/1.8;
printf ("Temp. in celsius =%6.2f",celsius);
}
