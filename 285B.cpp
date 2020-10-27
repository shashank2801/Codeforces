#include<iostream>

using namespace std;

int main(){
	int n,s,t;
	cin >> n >> s >> t;
	int A[n+1];
	
	for(int i=1;i<=n;i++)
		cin >> A[i];
	
	int count = 0;
	while(s!=t && A[s]!=0){
		int temp = A[s];
		A[s]=0;
		s = temp;
		count++;
	}
	
	if(s==t)
		cout << count << "\n";
	else
		cout << -1 << "\n";
return 0;
}
