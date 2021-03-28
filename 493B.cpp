#include<bits/stdc++.h>

using namespace std;

int main(){
	long int n;
	cin >> n;
	
	vector<long long int> A,B;
	long long int x,A_total=0,B_total=0,last;
	
	for(long int i= 0;i<n;i++){
		cin >> x;
		if(i==n-1)
			last = x;

		if(x<0){
			x*=-1;
			B_total+=x;
			B.push_back(x);
		}
		else{
			A_total+=x;
			A.push_back(x);
		}
			
	}
	
	
	if(A_total>B_total){
		cout << "first \n";
		return 0;
	}
	
	else if(A_total < B_total){
		cout << "second \n";
		return 0;
	}
	
	else{
		
		if(A==B){
			if(last>0){
				cout << "first \n";
				return 0;
			}
			
			else{
				cout << "second \n";
				return 0;
			}
		}
		
		else{
		
		vector<long long int>::iterator p=A.begin();
		vector<long long int>::iterator q=B.begin();
		
		while(p!=A.end() || q!=B.end()){
			if(*p==*q){
				p++;
				q++;
			}
			
			else{
				if(*p>*q){
					cout << "first \n";
					return 0;
				}
				else{
					cout << "second \n";
					return 0;
				}
			}
		}		
		
		
		}
		
		
			
	}
	
return 0;	
}
