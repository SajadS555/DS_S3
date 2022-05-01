#include<stdio.h>
void main()
{
	int i,j,s,a[100][100],n,m,size=0;
	printf("row size:");
	scanf("%d",&n);
	printf("column size:");
	scanf("%d",&m);
	printf("elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=0)
				size++;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			int b[size][3],k;
			if(a[i][j]!=0)
			{
				b[k][0]=i+1;
				b[k][1]=j+1;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	printf("the sparse matrix is:");
	printf("row\tcolumn\tvalue\n");
	int b[size][3],k;
	for(k=0;k<size;k++)
	{
		printf("%d\t%d\t%d\n",b[k][1],b[k][2],b[k][3]);
	}

}
