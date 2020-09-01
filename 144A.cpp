#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,flag=0;
	int A[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin >> A[i];
	
	if(n==2) //case for minimum numbers
	{
	if(A[0]>=A[1])
	cout << 0;
	else
	cout << 1;
	}
	else{
	int max=0,min=0;
	for(int i=0;i<n;i++)
	{
		max = (A[i]>A[max])?i:max;
		min = A[i]<=A[min]?i:min;
	}
	if (max>min) // to check the position
	flag = 1;
	
	min = n-min-1;
	//cout << max << " " << min << endl; 
	if(flag==1)
	sum = min+max-1; //swapping will take one less.
	else
	sum = min+max;
	cout << sum;
	}
return 0;
}
