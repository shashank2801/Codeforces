#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int x,y,n,output;
	cin >> x >> y >> n;
	switch(n%6){
		case 0: output = x-y;
				break;
		case 1: output = x;
				break;
		case 2: output = y;
				break;
		case 3: output = y-x;
				break;
		case 4: output = -x;
				break;
		case 5: output = -y;
				break;
	}
	if(output < 0)
		output += 2*1000000007;
//	cout << output << endl;
	cout << output%1000000007 << endl;
return 0;
}
