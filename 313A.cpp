#include<iostream>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	if(n>=0){
	cout << n;
	return 0;
	}
	else{
		if(n%10 == 0 && n/100 == 0)
		cout << 0;
		else{
		int max;
	//	cout <<  << endl << n/10 << endl;
		max = (n/10 > (n/100)*10+(n%10) ) ? n/10 : (n/100)*10+(n%10);
		cout << max;
		}
		return 0;
	}

}
