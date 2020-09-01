#include<iostream>
#include<vector>
using namespace std;

int main(){
	int count=0,x;
	vector<int> A;
	for(int i=0;i<4;i++)
	{
	cin >> x;
	A.push_back(x);
	}
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
		if(A[i]==A[j])
		{
		count++;
		break;
		}
		}
	}
	cout << count << endl;
	
return 0;
}
