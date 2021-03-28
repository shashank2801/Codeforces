#include<iostream>

using namespace std;

int main(){
	int n,m;
	cin  >> n >> m;
	int a,b;
	bool restricted[1001] = {false};
	
	while(m--){
		cin >> a >> b;
		restricted[a] = true;
		restricted[b] = true;
	}
	
	int x = 1;
	while(restricted[x]){
		x++;
	}
	
	cout << n-1 << "\n";
	for(int i=1;i<x;i++)
		cout << i << " " << x << "\n";
		
	for(int i=x+1;i<=n;i++)
		cout << x << " " << i << "\n";
		
		
return 0;
}
