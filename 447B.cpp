#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int k,A[26],w=0;
	cin >> str >> k;
	for(int i=0;i<26;i++)
		cin >> A[i];
		
	int max=A[0];
	
	for(int i=0;i<str.length();i++)	
		w+= (A[str[i]-'a']*(i+1));
		
	for(int i=1;i<26;i++){
		if(A[i]>max)
			max= A[i];
	}
	
	for(int i=str.length()+1;i<(str.length()+1+k);i++)
		w+= max*i;
	
	cout << w << endl;
	
return 0; 
}
