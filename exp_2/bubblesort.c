#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,s,j,temp=0;
	printf("Enter the siz of array:");
	scanf("%d",&s);
	printf("Enter the elements in the array:");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;	
			}
		}
	}	
	printf("The sorted array is:");
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
	return 0;
}
