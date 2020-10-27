#include<iostream>

using namespace std;

int main(){
	int A[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin >> A[i][j];
			
	int sum = 0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			sum += A[i][j];
			
	sum/=2;
	A[0][0] = sum - A[0][1]	- A[0][2];
	A[1][1] = sum - A[1][0] - A[1][2];
	A[2][2] = sum - A[2][0] - A[2][1];
	
 	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << A[i][j] << " ";
		}
		
		cout << "\n";
	}
	
	return 0;
}
