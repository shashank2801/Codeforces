#include <iostream>
using namespace std;

int main(){
		char str[200];
		cin>>str;
				for(int j=0;j<200;j++)
				{
					if(str[j]=='.')
					{
						cout << 0;
					}
					if(str[j]=='-' && str[j+1] == '.')
					{
						cout<< 1;
						j++;
					}
					if(str[j]=='-' && str[j+1] == '-')
					{
						cout<< 2;
						j++;
					}
				}
	return 0;
	}

