#include <iostream> 
using namespace std; 

// Linearly search x in A[]. If x is present then return its 
// location, otherwise return -1 
int Lsearch(int A[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

int main() 
{ int A[100],x,n,i,j;
 
	cout << "Enter number of elements in your array{less than 100):";
    cin >> n;
 
  	for( i=0;i<n;i++)
    {cin >> A[i];}
 
  	cout << "Your entered list is :";
    for( j=0;j<n;i++)
    {cout << A[j]<<endl ;}
 
  	cout<<"Enter your search element:"<<endl;
  	cin>>x;
 
  	cout<<"The element that you want to search for is:"<<x<<endl;
	
	int flag = Lsearch(A, n, x); 
	if (flag == -1) 
		cout << "Element is not present in the array:"; 
	else
		cout << "Element found at position: " << flag; 

	return 0; 
} 