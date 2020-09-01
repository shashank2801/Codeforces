#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n],odd=0,even=0,odd_index,even_index;
	for(int i=0;i<n;i++)
		cin >> A[i];
		
	for(int i=0;i<n;i++){
		if(A[i]%2==0){
			even++;
			even_index = i+1;
		}
		else{
			odd++;
			odd_index = i+1;
		}
	}
			if(even>1)
			cout << odd_index << endl;
		else
			cout << even_index << endl;
	
return 0;
}
