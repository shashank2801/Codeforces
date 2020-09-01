#include<iostream>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int A[n],count=0;
	for(int i=0;i<n;i++)
	cin >> A[i];
	
	for(int i=0;i<n;i++)
	if(A[i]+k<=5)
	count++;
	
	cout << count/3 << endl;
	
return 0;
}
