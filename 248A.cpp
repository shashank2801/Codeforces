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
	
	else if((lz == lo) && (lz == ro) && (lz == rz))
	{
		for (int i = 0;i<n;i++)
		{
			if(A[i][0]==A[i][1])
			t++;
		}
		cout << t << endl;
	}
	
	else{
		int max = std::max(lz,std::max(lo,std::max(ro,rz)));
	if(max == lz || max == ro)
	{
		t1 = lo;
		t2 = rz;
	}
	if(max == lo || max == rz)
	{
		t1 = lz;
		t2 = ro;
	}
	
	t= t1 + t2;
	cout << t << endl;
	}
	
	return 0;
	
}
