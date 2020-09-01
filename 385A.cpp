#include<iostream>

using namespace std;

int main(){
	int n,c;
	cin >> n >> c;
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
	int diff=0;
	for(int i=0;i<n-1;i++){
		if(A[i]-A[i+1]>diff)
		diff = A[i]-A[i+1];
	}
	if(diff-c>=0)
	cout << diff-c << endl;
	else
	cout << 0;
	
return 0;
}
