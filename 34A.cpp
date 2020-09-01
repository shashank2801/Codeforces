#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int A[n],min=0,flag1,flag2;
	
	for(int i=0;i<n;i++)
	cin >> A[i];
	
	min = abs(A[0]-A[n-1]);
	flag1=0;
	flag2=n-1;
	
	if(min > abs(A[0]-A[1]))
	{
	min = abs(A[0]-A[1]);
	flag1=0;
	flag2=1;
	}
	
	for(int i=1;i<(n-1);i++)
	{
		if(min > abs(A[i]-A[i+1] ))
		{
			min = abs(A[i]-A[i+1]);
			flag1=i;
			flag2= i+1;
		}
		else if(min > abs(A[i]-A[i-1] ))
		{
			min = abs(A[i]-A[i-1]);
			flag1=i;
			flag2= i-1;
		}	
	}
	
	if(min > abs(A[n-1]-A[n-2]))
	{
	min = abs(A[n-1]-A[n-2]);
	flag1=n-1;
	flag2=n-2;
	}
	
	cout << flag1+1 << " " << flag2+1;
return 0;
}
