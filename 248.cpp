#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,A[10000][2],t=0,t1=0,t2=0;
	cin>> n;
	int lz=0,lo=0,rz=0,ro=0;
	for(int i = 0; i<n; i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>> A[i][j];
			if(j==0 && A[i][j]==0)
			lz++; // leftzero
			if(j==0 && A[i][j]==1)
			lo++; //leftone
			if(j==1 && A[i][j]==0)
			rz++; //rightzero
			if(j==1 && A[i][j]==1)
			ro++; //rightone
		}
	}	
	if(((lz == n) && (ro == n || rz == n)) || ((lo == n) && (rz == n || ro == n)) )
	cout << 0 << endl;
	else{
	if(lo<lz)
	t1 = n-lz;
	else
	t1 = n-lo;
	if(ro<rz)
	t2 = n-rz;
	else
	t2 = n-ro;
	
	t = t1+t2;
	cout << t << endl;
	}
	return 0;
}
