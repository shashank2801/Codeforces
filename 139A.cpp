#include<iostream>

using namespace std;

int main(){
	int n,A[7],d=0;
	cin >> n;
	for(int i=0;i<7;i++)
	cin >> A[i];
	
	while(n>0){
	for(int i=0;i<7;i++)
	{
		if(n>0 && d<7)
		{
			n = n-A[i];
			d++;
		}
		else if(n>0 && d == 7)
		{
			n = n-A[i];
			d=1;
		}
		else
		break;
	}
	}
	cout << d;
return 0;
}
