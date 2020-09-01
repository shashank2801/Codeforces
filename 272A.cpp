#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,sum=0,count=0;
	cin >> n;
	for(int i =0;i<n;i++)
	{
	cin >> x;
	sum += x;
	}
	for(int j=sum+1;j<=sum+5;j++)
	{
		if(j % (n+1) == 1)
		continue;
		else
		count++;
	}
	
	cout << count << endl;
return 0;
}

