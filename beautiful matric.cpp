#include <iostream>
#include<cstdlib>

using namespace std;

int main(){
	int A[5][5],i,j,dis;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin >> A[i][j];
			if(A[i][j]==1)
			{
				dis = abs(2-i)+ abs(2-j);
			}
			
		}
	}
	cout << dis << endl;
	return 0;
}
