#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	long long int n,m;
	cin >> n >> m;
	int A[m];
	
	for(int i=0;i<m;i++)
		cin >> A[i];
		
	sort(A,A+m);
		
	if(A[0]==1 || A[m-1]==n){
		cout << "NO" << "\n";
		return 0;
	}
	
	else{
		for(int k=0;k<=m-1;k++){
			if(A[k]+1 == A[k+1] && A[k+1]+1 == A[k+2]){
				cout << "NO" << "\n";
				return 0;
			}
		}
		
		cout << "YES" << "\n";
		return 0;
//		int i=1,j=1;
//		int pre = 0;
//		for(int k=1;k<=m;k++){
//			pre = k-1;
//			if(A[k]-1-i<=3 && A[k]-1!=A[pre]){
//				i=A[k]-1;
//			}
//		}
//		
//		cout << i << endl;
//		
//		while(j!=m){
////			cout << A[j]-i << "\n";
////		cout << "i:" << i << "\n";
//			if(A[j]-i<=3 && ((A[j+1]-(A[j]+1) <=3 && A[j+1]!= A[j]+1) || (A[j]+2 != A[j+2]-(A[j]+2) <=3 && A[j+2] != A[j]+2) ) ){
//				if(A[j+1]-(A[j]+1) <=3 && A[j+1]!= A[j]+1){
//					i=A[j]+1;
//					j++;
//				}
//				
//				else if(A[j]+2 != A[j+2]-(A[j]+2) <=3 && A[j+2]!= A[j]+2){
//					i=A[j]+2;
//					j+=2;
//				}
//				
////				cout << "i: " << i << " j:" << j << "\n";
//			}
//			
//			else{
//				cout << "NO" << "\n";
//				return 0;
//			}
//		}
//		if(n-i<=3)
//			cout << "YES" << "\n";
//		else
//			cout << "NO" << "\n";
	}
	
	
	return 0;
			
}
