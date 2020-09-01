#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    string str;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
    int count = 0;
    cin >> str;
    int l = str.length();
    for(int i=0;i<=l;i=i+2)
    {
    	char ch = str[i];
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
        count++; i++;
    }
    }
    if(count == 0)
    cout << "valid" << endl;
    else
    cout << "invalid " << count << endl;
    }
return 0;
}
