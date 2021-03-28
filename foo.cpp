#include<iostream>

using namespace std;

void foo(int n){
	if(n>1){
		foo(n/2);
		foo(n/2);
	}
	
	cout << "#" << "\n"; 
}

int main(){
	foo(4);
	
	return 0;
}
