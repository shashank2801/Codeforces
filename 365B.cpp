#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long int A[n];
	
	for(int i=0;i<n;i++)
		cin >> A[i];
	
	if(n<=2){
		cout << n;
		return 0;
	}
	
	else{
		int ans=0,count = 2;
		for(int i=2;i<n;i++){
			if(A[i] == A[i-1]+A[i-2]){
				count++;
			}
		
			else{
				ans = max(ans,count);
				count = 2;
			}
		}
		
		ans = max(ans,count);
		cout << ans << "\n";
	}
	
	
	
	return 0;
	
}
