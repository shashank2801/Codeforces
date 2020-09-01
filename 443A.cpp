#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	
	int A[26] ={},count=0;
	for(int i=1;i<str.length()-1;i++){
	A[str[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	if(A[i]>0)
	count++;
	
	cout << count << endl;
	
return 0;		
}
