#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,count,extra;
	cin >> n >> m;
	int A[n],B[m];
	
	extra=(n>m)?n-m:0;
	count=0;
	
	for(int i=0;i<n;i++)
		cin >> A[i];
		
	for(int i=0;i<m;i++)
		cin >> B[i];
		
	int j=0;
	for(int i=0;i<n;i++){
		while(j<m){
			if(B[j]>=A[i]){
				count++;
				i++;
			}
			
			j++;
		}
	}
			
//			
//		if(B[i]>=A[j]){
//				cout << "yaha  " << B[i] << "   " << A[j] << "\n";
//			count--;
//			j--;
//			i--;
//		}
//		
//		else
//			i--;
//	}

		cout << max(0,n-count) << "\n";
		
	return 0;
}
