#include<stdio.h>

void selection_sort(int a[50],int n)
{
	int min,i,j,t;
	for(i=0; i<n; i++)
	{
		min =i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
				min =j;
		}
		t=a[i];
		a[i] = a[min];
		a[min] = t;
	}
}


void main()
{
	int n,a[50],i,key;
	printf("Enter the number of Element ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0; i<n; i++)
	{
		//printf("Enter the %d Element ",i);
		scanf("%d",&a[i]);
	}

	printf("\n");
	printf(" ************* BEFORE SORTING **************** ");	
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
		
	}
	selection_sort(a,n);
	printf("\n");
	printf(" ************* AFTER SORTING **************** ");
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
		
	}
}