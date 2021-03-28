#include<iostream>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	long long int A[n+1],sum[n+1];
	
	sum[0]=0;
	for(long long int i=1;i<=n;i++){
		cin >> A[i];
		sum[i] = sum[i-1] + A[i];
	}
	
	long long int s = sum[n]/3;
	if(sum[n]%3 != 0 || n<3){
		cout << 0 << "\n";
		return 0;
	}
	
	long long int ss = 2*s;
	long long int count = 0,ans=0;
	
	for(long long int i=1;i<n;i++){
		if(sum[i]==ss)
			ans+=count;
			
		if(sum[i]==s)
			count++;
	}
	
	cout << ans << "\n";
	
return 0;
}
