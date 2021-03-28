//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main(){
//	int m,s;
//	cin >> m >> s;
//	
//	if(s == 0 && m !=1){
//		cout << -1 << " " << -1 << "\n";
//		return 0;
//	}
//	
//	int x = 0,y=0;
//	
//	if(s<10){
//		if(m==1){
//			cout << s << " " << s << "\n";
//			return 0;
//		}
//		
//		else{
//			for(int i=0;i<m-1;i++)
//				x = x*10 + 1;
//				
//			x= x*10 + (s-m+1);
//		}
//	}
//	
//	else{
//	
//		while(s){
//			if(s>9){
//				s-=9;
//				x = x*10 + 9;
//			}
//		
//			else{
//				int z = x,count=0;
//				while(z){
//					count++;
//					z/=10;
//				}
//			
//				x = s*pow(10,count) + x;
//				s = 0;
//			}
//		}
//	
//	}
//	
//	int z = x;
//	while(z){
//		int a = z%10;
//		y = y*10 + a;
//		z/=10;
//		}
//	
//	cout << x << " " << y <<  "\n";
//	
//return 0;
//}

#include <iostream>
using namespace std;

int main()
{
    int m, s, t, i;
    cin >> m >> s;
    string a, b;

    if (s == 0)
    {
        cout << (m == 1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }

    if (s > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    for (i = m - 1; i >= 0; i--)
        a += b[i];

    for (i = 0; a[i] == '0'; i++);
    a[i]--;a[0]++;
	
	cout << a << " " << b << endl;
	return 0;
}
