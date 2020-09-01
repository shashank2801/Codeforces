#include<bits/stdc++.h>

using namespace std;

bool Sorted(int A[],int n){	//to check whether the array is in ascending order or not
	for(int i=0;i<n-1;i++){
		if(A[i]>A[i+1])
			return 0;
	}
	
	return 1;
}

int main(){
	int n;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
		
	bool flag=1;
	int front =0, end;
	
	for(int i=0;i<n-1;i++){
		if(A[i]>A[i+1]){
			flag=0;
			front = i; //assigns the value from where the first element is out of order
			break;
		}
	}
	
	if(flag){ //checks if the array is in ascending order.. if yes then no replacement will be done 
		cout << "yes\n1 1" << endl;
		return 0;
	}
	
	end = front; //else checking the value of end
	while((end < n-1) && A[end]>A[end+1])
		end++; 
		// goes till the last out of order element
		
	reverse(A+front,A+end+1);
	if(Sorted(A,n)){
		cout << "yes\n " << ++front << " " << ++end << endl;
		return 0;
	}
	
	else
	cout << "no" << endl;
	return 0;
	 
}
