#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main(){
	int n,k,m=INT_MAX;
	cin >> n >> k;
	int A[n];
	
	for(int i=0;i<n;i++){
		cin >> A[i];
		m = min(m,A[i]);
	}
	
	//m is the minimum number of pebbles in any tiles.
	
	if(k<1){
		cout << "NO" << "\n";
		return 0;
	}
	
	int ans[100][100];
	
	memset(ans,0,sizeof(ans));
	
	int x=1;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=m;j++)
			ans[i][j] = x;
	}
	
	m++;x++;
	
	for(int i=0;i<n;i++){
		int w = x;
		for(int j=m;j<A[i];j++){

			if(w>k){

				cout << "NO" << "\n";
				return 0;
			}
				
			ans[i][j] = w;
			w++;
		}
		
	}
	
	cout << "YES" << "\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<A[i];j++){
			cout << ans[i][j] << " ";
		}
		
		cout << "\n";
	}
	
	
	return 0;
}
