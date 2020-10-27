#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	int A[26] = {0};
	for(int i=0;i<str.length();i++)
		A[str[i]-'a']++;
		
	int count=0;
	for(int i=0;i<26;i++){
		if(A[i]>0 && A[i]%2!=0)
			count++;
	}
	
	if(count==1 || count==0){
		cout << "First" << "\n";
		return 0;
	}
	
	else if(count%2==0){
		cout << "Second" << "\n";
		return 0;
	}
	else{
		cout << "First" << "\n";
		return 0;
	}
}
