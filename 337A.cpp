#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	cin >> n >> m;
	int A[m];
	for(int i=0;i<m;i++)
	cin >> A[i];
	
	sort(A,A+m);
	
	int min=A[n-1]-A[0];
	for(int i=0;i<m;i++)
		{
			for(int j=i+n-1;j<m;j++)
				{
					if(A[j]-A[i]<= min)
					min = A[j]-A[i];
				}
		}
	
	cout << min << endl;

return 0;
	
	
}
