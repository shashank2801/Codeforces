#include<iostream>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int count=0;
	if(n%2 == 0)
	count = n/2;
	else
	count = n/2 + 1;
	
	if(m>n){
		cout << -1 << endl;
		return 0;
	}
	else if(count%m == 0)
		cout << count << endl;
		
	else{
			while(n--){
				count++;
				if(count % m == 0){
				cout << count << endl;
				return 0;
				}
			}
		}
	return 0;
}
