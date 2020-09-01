#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,l;
	cin >> n >> l;
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
	sort(A,A+n);
	int r = max(A[0],l-A[n-1]) * 2;
	
	for(int i=0;i<n-1;i++){
		r = max(r,(A[i+1]-A[i]));
	}
	
	cout.precision(6);
	cout << fixed << r/2.0 << endl;
	
return 0;
}
