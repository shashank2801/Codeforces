#include<iostream>

using namespace std;

int main(){
	long long int n,k,x;
	cin >> n >> k;
	if(n%2==0)
	{
		if(k<= n/2)
			x = (2*k)-1;
		else
		{
			k = k-n/2;
			x = 2*k;
		}	
	}
	else
	{
		if(k<= (n/2 + 1 ))
			x = (2*k)-1;
		else
		{
			k = k- (n/2 + 1);
			x = 2*k;
		}
	}
	cout << x << endl;
return 0;
}
