#include<iostream>

using namespace std;

int main(){
	int n,m,k,friends=0;
	cin >> n >> m >> k;
	int A[m+1];
	for(int i=0;i<m+1;i++)
		cin >> A[i];
		
	for(int i=0;i<m;i++){//for each player
		int diff=0;
		for(int j=0;j<n;j++){
			if(((A[i]>>j)&1) != ((A[m]>>j)&1))
				diff++; 
		}
		
		if(diff<=k)
		friends++;		
	}
	
	cout << friends << endl;
return 0;
}
