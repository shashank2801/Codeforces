#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,A[500],point=0,temp=0;
	cin>> n >>m;
	for(int i=0;i<n;i++)
	cin >> A[i];
	
	int i=1,j=1;
	
	while(A[i])
	{
		if(A[i]>m)
		{
		temp = i;
		A[i] -= m;
		A[n+1] = A[i];
		i++;
		}
		
		else 
		i++;
		
	}
		point = temp;
	if(point == 0)
	cout << n << endl;
	else
	cout << (point+1) << endl;
return 0;
}
