#include<iostream>

using namespace std;

int main(){
	int n,d,sum=0;
	cin >> n >> d;
	int t[n];
	for(int i=0;i<n;i++){
	cin >> t[i];
	sum+=t[i];
	}
	
	int rem=0,count=0;
	rem = d-(n-1)*10;
	if(d< sum+ (n-1)*10)
	{
		cout << -1;
		return 0;
	}
	else{
		count = (n-1)*2;
		rem-=sum;
		rem/=5;
		count+=rem;
		cout << count << endl;
	}
	
return 0;
}
