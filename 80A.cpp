#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m,flag = 0,x,count = 0;
	cin >> n >> m;
	for(int i=2;i<=sqrt(m);i++)
	{
		if(m % i != 0)
		continue;
		else
		{
			flag = 1;
			break;
		}
	}
	for(int i= n+1;i<100;i++)
	{
		int flag1 = 0;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j!=0)
			continue;
			else
			{
			flag1 = 1;
			break;
			}
		}
		if(flag1 == 0)
		{
		x = i;
		count++;
		break;
		}
		
	}
	//cout << x << endl;
	
	if (m == x && flag == 0)
	cout << "YES" << endl;
	else
	cout << "NO" << endl;
	return 0;
}
