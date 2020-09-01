#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	int cost;
	if(a*m<=b)
	cost = a*n;
	
	else if(n<m)
	cost = a*n;
	
	else if(n==m)
	cost = a * min(n,m);
	
	else{
		while(n)
		{
			if(n>=m)
			{
				cost+= b;
				n-= m;
			}
			else
			break;
		}
		
		cost+= a*n;
	}
	
	cout << cost;
	
return 0;
}
