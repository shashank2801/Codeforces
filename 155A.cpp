#include<iostream>
using namespace std;

int main()
{
	int n,A[1000],max,min,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	cin >> A[i];
	max = A[0];
	min = A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
			count++;
		}
		if(A[i]<min)
		{
			min = A[i];
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}
