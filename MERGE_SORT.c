#include<stdio.h>
int mergesort(int a[],int p,int r)
{
	int q=0;
	if(p<r)
	{
		q=(p+r)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}
merge(int a[],int p,int q,int r)
{
	int L[100],R[100],m,n,i,j,k;
	n=q-p+1;
	m=r-q;
	for(i=1;i<=n;i++)
	{
		L[i]=a[p+i-1];
	}
	for(j=1;j<=m;j++)
	{
		R[j]=a[q+j];
	}
	L[n+1]=999;
	R[m+1]=9999;
	i=1;j=1;
	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i=i+1;
		}
		else
		{
			a[k]=R[j];
			j=j+1;
		}
	}
}


void main(){
	int a[50],n,i;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for( i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("************** BEFORE SORTING ****************");
	printf("\n");
	for( i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	mergesort(a,0,n-1);
	printf("\n");
	printf("************** AFTER SORTING ****************");
	printf("\n");
	for( i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}