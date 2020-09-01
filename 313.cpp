#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n>=0){
	cout << n;
	return 0;
	}
	else{
		if(n/100 == 0)
		cout << 0;
		else{
		int b,max;
		b = n%100;
		max = (n/10 > (n/100)*10+b) ? n/10 : (n/100)*10+b;
		cout << max;
		}
		return 0;
	}

}
