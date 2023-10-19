#include<stdio.h>
#include<stdlib.h> 
int main()
{
int a[10],i,n,low,high,mid,key;
printf("Enter the value of n:  ");
scanf("%d",&n);
printf("\nEnter %d values in ascending order\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
printf("Enter the number to be searched: ");
scanf("%d",&key);
printf("Array Elements are");
 for(i=0;i<n;i++)
 {
  printf("\n%d",a[i]);
  }
low=0;
high=n-1;
	while (low<=high)
 	{
 	mid=(low+high)/2;
 		if(a[mid]==key)
 		{
		printf("\nSearch is Successful, Number found ..!\n");
 		exit(0);
 		}
 		else if (key<a[mid])
 			high=mid-1;
 		else if (key>a[mid])
 			low=mid+1;
 	}
printf("\n Search unsuccessful, Number not found.... \n ");
return(0);
} 



