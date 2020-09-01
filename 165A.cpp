#include<iostream>
using namespace std;
int main(){
	int n,A[200][2],count=0;
	cin >> n;
	//cout << n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin >> A[i][j];
			//cout << A[i][j];
		}
	}
			
	for(int i=0;i<n;i++)
	{
		
		int x = A[i][0]; //xcoordinate
		int y = A[i][1]; //ycoordinate
		
		int up=0,down=0,left=0,right=0;
		for(int j=0;j<n;j++)
		{
			if(x == A[j][0] && y == A[j][1])
			continue;
			
			else{
			if(x< A[j][0] && y == A[j][1])
			right++;
			else if(x> A[j][0] && y == A[j][1])
			left++;
			else if(x == A[j][0] && y < A[j][1])
			up++;
			else if(x == A[j][0] && y > A[j][1])
			down++;
		}
			if(up > 0 && down > 0 && left >0 && right >0){
				if(up+down+left+right >=4){
				count++;
				break;
			}
		}
			
		}
	}
	cout << count << endl;
return 0;
}
