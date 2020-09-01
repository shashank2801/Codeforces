#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	cin >> str;
	int flag=0;
	for(int i=0;i<str.length();i++)
	{
		/*
	
		if(str[i]!='1'&&str[i]!='4')
		flag=0;
		if((str[i-1]!='1'&&str[i+1]!='1')||(str[i-1]!='1'&&str[i+1]!='4')||(str[i-1]!='4'&&str[i+1]!='1')||(str[i-1]!='4'&&str[i+1]!='4'))
		flag=0;
		if((str[i]=='1'||str[i]=='4')&&((str[i-1]=='1'&&str[i+1]=='1')||(str[i-1]=='4'||str[i+1]=='4')))
		flag=1;
		if(str[0]!='1')
		{
			flag=0;
		}
		
		*/
	
		if(str[0]!='1')
		{
		flag=0;
		break;
		}
		if(str[i]=='1'||str[i]=='4')
		{
			if(str[i]=='1')
			flag=1;
			
			else if(str[i]=='1'&&str[i+1]=='4')
			{
				i++;
				flag=1;
			}
			else if(str[i]=='1'&&str[i+1]=='4'&&str[i+2]=='4')
			{
				i+=2;
				flag=1;
			}
			if(str[i]=='4' && str[i+1]=='4' && str[i+2]=='4')
			{
				flag=0;
				break;
			}
		}
		
		else
		{
			flag=0;
			break;
		}	
	}
	
//	if(str=="1"||str=="14")
//		flag=1;
	if(flag==1)
	cout << "YES" << endl;
	else
	cout << "NO" << endl;

return 0;

}
