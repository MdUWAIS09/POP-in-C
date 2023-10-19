//Develop a program to compute the roots of a quadratic equation by 
//accepting the coefficients. Print appropriate messages.

#include<stdio.h> 
#include<math.h>
void main()
{
float a,b,c,d,r1,r2;
printf("Enter three coefficients a,b and c of quadratic equation\n");
scanf("%f%f%f",&a,&b,&c);
if(a!=0)
{
	printf("\n Given co efficients form quadratic equation");
	d=(b*b)-(4*a*c);
	if(d>0)
 	{
 	printf("\n Roots are real and distinct");
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("\n Root1=%f \t Root2=%f\n",r1,r2);
	}
	else if(d==0)
	{
 	printf("\n Roots are real and equal");
	r1=-b/(2*a);
	r2=r1;
	printf("\n Root1=%f \t Root2=%f\n",r1,r2);
	}
	else
	{
 	printf("\n Roots are imaginary\n");
	r1=-b/(2*a);
	r2=sqrt(fabs(d))/(2*a);
	printf("\n Root1=%f +i %f \t Root2=%f -i %f\n",r1,r2,r1,r2);
	}
}
else
printf("\n Given co efficients do not form quadratic equation\n");
}













