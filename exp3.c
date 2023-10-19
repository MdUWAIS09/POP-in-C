#include<stdio.h>
void main()
{
int units;
float amt,totalamt,surcharge;
char name[25];
printf("Enter the name of user:  ");
scanf("%s",name);
printf("\n Enter the total units consumed:  ");
scanf("%d",&units);
 	if(units<=200)
	{
	amt=units*0.80;
	} 
	else if(units<=300)
	{
	amt=160+((units-200)*0.90);
	}
	else
	{
	amt=250+((units-300)*1.00);
	}
	totalamt=amt+100;
 	if(totalamt>400)
 	{
 	surcharge=totalamt*0.15;
 	totalamt=totalamt+surcharge;
 	printf("\n Total amount after adding surcharge");
 	printf("\n User:%s \n Electricity Bill:Rs.%.2f\n",name,totalamt);
 	}
 	else
 	{
       printf("\n User: %s \n Electricity Bill:Rs.%.2f\n",name,totalamt);
 	}
}

