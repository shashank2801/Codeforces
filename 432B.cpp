#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[100010][2];
	for(int i=1;i<=n;i++)
		for(int j=0;j<2;j++)
			cin >> A[i][j];

	int home[n+1] = {0},away[n+1] = {0};		
	int C[n+1] = {0};
	
	for(int i=1;i<=n;i++)
		C[A[i][0]]++;
		
		
	for(int i=1;i<=n;i++){
		home[i] = n-1;
		home[i]+= C[A[i][1]];
		away[i] = 2 * (n-1) - home[i]; 
	}
	
	for(int i=1;i<=n;i++)
		cout << home[i] << " " << away[i] << "\n";
		
return 0;
}
