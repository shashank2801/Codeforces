#include<iostream>

using namespace std;

int main(){
	long long int n,t;
	cin >> n >> t;
	int A[n];
	
	for(int i=0;i<n;i++)
		cin >> A[i];
	
	int j=-1,sum =0,ans=0;
	
	for(int i=0;i<n;i++){
		if(sum+A[i]<=t)
			sum+=A[i];
		else{
			sum+=A[i];
			while(sum>t){
				j++;
				sum-=A[j];
			}
		}
		
		ans = max(ans,i-j);
	}
	
	cout << ans << "\n";
	
	
return 0;
}
