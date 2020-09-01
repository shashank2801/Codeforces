#include <iostream>
using namespace std;

int main(){
		int year;
		cin>>year;
		int flag=0;
				for(int i=year+1;i<=10000;i++)
				{
					int j = i;
					int k = i;
					while(j)
					{
						int a = j%10; //first digit
						j=j/10;
						int b = j%10; //second digit
						j= j/10;
						int c = j%10; //third digit
						int d = j/10;
						if(a==b || a==c || a==d || b ==c || b==d || c==d)
						continue;
						else
							{
							cout<< k << endl;
							flag =1;
							}
					
					}
				if(flag==1)
				break;
				}
	return 0;
	}

