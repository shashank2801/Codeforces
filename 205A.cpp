#include<iostream>

using namespace std;

int main(){
	int n,min,flag=0,pos;
	cin >> n;
	int A[n];
	cin >> A[0];
	min = A[0];
	pos = 1;
	for(int i=1;i<n;i++)
	{
		cin>>A[i];
		if(A[i]<min)
		{
		min = A[i];
		flag=0;
		pos = i+1;
		}
		
		else if(A[i] == min)
		flag=1;
		
		else
		continue;
	}
	
	if(flag==1)
	cout << "Still Rozdil" << endl;
	
	else
	cout << pos << endl;
	
return 0; 
}
