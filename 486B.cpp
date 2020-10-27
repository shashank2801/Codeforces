#include<iostream>

using namespace std;

int main(){
	int m,n;
	cin >> m >> n;
	int A[m][n],B[m][n],C[m][n];
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			A[i][j] = 1;
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >> B[i][j];
			
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(B[i][j]==0){
				for(int k=0;k<m;k++)
					A[k][j] = 0;
				for(int k=0;k<n;k++)
					A[i][k] = 0;
			}
		}
	}
	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int ans= 0;
			for(int k=0;k<m;k++)
				ans = ans | A[k][j];
			for(int k=0;k<n;k++)
				ans = ans | A[i][k];
				
			C[i][j] = ans;
		}
	}
	
	int flag = 0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(B[i][j]!=C[i][j])
				flag = 1;
				
	if(flag == 1)
		cout << "NO" << "\n";
	else{
		cout << "YES" << "\n";
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout << A[i][j] << " ";
			}
			
			cout << "\n";
		}
	}
	
	
	return 0;
}
