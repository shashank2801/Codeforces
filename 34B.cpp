#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
	
	sort(A,A+n);
	int ans = 0;
	
	for(int i=0;i<n;i++){
		if(A[i]<0 && m>0){
//			cout << A[i];
			ans-=A[i];
			m--;
		}
	}
	
	cout << ans;
	
return 0;
}
