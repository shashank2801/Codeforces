#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	long int ans=0;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
		
	ans += 2*n-1;
	ans += A[0];
	
	for(int i=1;i<n;i++){
		if(A[i-1]!=A[i])
			ans += abs(A[i-1]-A[i]);	
	}
	
	cout << ans << endl;
	
return 0;
}
