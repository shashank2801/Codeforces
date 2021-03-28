#include<iostream>

using namespace std;

int main(){
	for(int i=1;i<=87;i++)
		if(i%2!=0)
			cout << i << ",";
	
	
	cout << endl;
			
	for(int i=1;i<=87;i++)
		if(i%2==0)
			cout << i << ",";
			
	return 0;
}
