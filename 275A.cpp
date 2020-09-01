#include<iostream>
using namespace std;

int main(){
	bool A[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		A[i][j] = true;
	}
	int x;
	for(int i=1;i<4;i++)
		{
			for(int j=1;j<4;j++)
			{
				x=0;
				cin>> x;
				if(x%2!=0)
				{
					A[i][j] = !A[i][j];
					A[i-1][j] = !A[i-1][j];
					A[i+1][j] = !A[i+1][j];
					A[i][j-1] = !A[i][j-1];
					A[i][j+1] = !A[i][j+1];
				}
					
			}
		}
	for(int i=1;i<4;i++)
		{
			for(int j=1;j<4;j++)
			cout<<A[i][j];
			
			cout<<endl;
		}
	return 0;
}
