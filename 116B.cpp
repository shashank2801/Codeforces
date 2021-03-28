#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	char A[n][m];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> A[i][j];
			
	
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(A[i][j] == 'W'){
				
				if(i>0 && (A[i-1][j] == 'P')){
				//	cout << i << j << "\n";
					count++;
					A[i-1][j] = 'x';
					continue;
			}
			
				if(i<n-1 && (A[i+1][j] == 'P')) {
			//		cout << i << j << "\n";
						count++;
						A[i+1][j] = 'X';
					continue;
				}
					
				
				if( j>0 && (A[i][j-1] == 'P')){
				//	cout << i << j << "\n";
						count++;
						A[i][j-1] = 'X';
						continue;
				}
					
				 if(j<m-1 && (A[i][j+1] == 'P')){
				 //	cout << A[i][j+1] << i << j << "\n";
						count++;
						A[i][j+1] = 'X';
				 	continue;
				 }
				}	
			else
				continue;
		}
	}
	
	cout << count << "\n";
	
return 0;
}
