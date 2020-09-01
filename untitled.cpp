#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,A;
	vector<int> a;
	vector<int> b;
	cin >> n >> m;
	
	for(int i=1;i<=n;i++)
	{
	cin >> A;
	a.push_back(A);
	b.push_back(i);
	}
	int i=1;
	while(a.size())
	{
		if(a[i]<=m)
		i++;
		
		else
		{
			a[i]=a[i]-m;
			a.push_back(a[i]);
			b.push_back(i);
			i++;
		}
	cout<< a.size() << endl;
	}
	cout << b.back() << endl;
return 0;
}
