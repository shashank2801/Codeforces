#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0,A[n],size=0,x,y,z;

	A[0] = 0;
	A[1] = 1;
	for(int i=2;sum<=n;i++)
	A[i] = A[i-1]+A[i-2];
	
	
	x = A[size-1];
	n-= x;
	if(A[size-2] <= n)
		y = A[size-2];
	else
	{
		int t=size-2;
	while(A[t]<=n)
		t--;
		
		y = A[t];
		z=t;
	}
	n-=y;
	if(A[z-1] <= n)
		y = A[z-1];
	else
	{
		int t=z-1;
	while(A[t]<=n)
		t--;
		
		z = A[t];
	}
	cout << x << " " << y << " " << z << endl;
	
return 0;
}
