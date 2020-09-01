#include<iostream>
using namespace std;

int main()
{
	int n, A[100];
	double sum=0.0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		sum = sum + A[i];
	}
	double ans = sum/n;
	cout<< ans << endl;
return 0;
}
