/*insertionSort by Rahul Anand Roll number108118077*/
#include<stdio.h>
int main()
{
	int arr[100],n,temp,i,j;
	printf("Enter number of terms(should be less than 100): ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0)
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
    return 0;
}
