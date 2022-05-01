#include<stdio.h>
void main()
{
	int i,a[100],j,n,temp=0,position;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(a[position]<a[j])
				position=j;
		}
		temp=a[position];
		a[position]=a[i];
		a[i]=temp;
	}
	printf("The sorted array using selection sort is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
