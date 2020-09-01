#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,b,p;
	cin >> n >> m;
	queue <int> a;
	for(int i=1;i<=n;i++)
	{
		cin >> b;
		a.push(b);
		a.push(i);
	}
	while(!a.empty())
	{
		if(a.front()<= m)
		{
			a.pop();
			a.pop();
		}
		else{
			a.push(a.front()-m);
			a.pop();
			a.push(a.front());
			a.pop();
		}
		p = a.back();
	}
	cout << p << endl;
}
