#include<stdio.h>
int main()
{
	int n,j,i,a[100];
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("The ordered pair is \n");
for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	return 0;

}
