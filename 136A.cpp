#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n];
	for(int i=1;i<=n;i++)
	cin >> A[i];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(A[j]==i)
			{
				cout << j << " ";
				break;	
			}	
		}	
	}
	
return 0;
}
