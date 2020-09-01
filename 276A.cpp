#include<iostream>

using namespace std;

int main(){
	int n,max_joy,max,f,t;
	long long k;
	cin >> n >> k >> f >> t;
	if(t>k)
	max_joy = f- (t - k);
	else
	max_joy = f;
	while(--n){
		cin >> f >> t;
		if(t<=k)
		max = f;
		else 
		max = f-(t-k);
		
		if(max_joy<max)
		max_joy = max;
	}
	
	cout << max_joy << endl;
	
return 0;
}
