#include<iostream>

#define ll long long

using namespace std;

int main(){
	ll n,a,b;
	cin >> n >> a >> b;
	
	ll required = 6*n;
	ll total = a*b;
	
	if(total >= required){
		cout << total << "\n" << a << " " << b ;
		return 0;
	}
	
	else{
		while(total<required){
		ll diff = required - total;
		
//		cout << diff << "\n";
		
//		if(diff/a > diff/b){
////			cout << "b is " << b << " " << diff/b << "\n";
//			b = (diff/b == 0 ? b+1 : b + diff/b);	
//		}
//		
//		else if(diff/b > diff/a){
////			cout << "a is " << a << " " << diff/a << "\n";
//			a = (diff/a == 0 ? a+1 : a + diff/a);
//		}
//		
//		else{
//			if(diff/a == 0){
//				diff/a++;
//				diff/b++;
//			}
//			
//			if((a+diff/a)*b > (a*(b+diff/b)))
//				a+= diff/a;
//			
//			else
//				b+= diff/b; 
//		}
//		
//		total = a*b;
//
//		if(diff/a == 0)
//			diff/a++;
//			
//		if(diff/b == 0)
//			diff/b++;
//
//		cout << (a+1)*b << " " << a*(b+1) << " ";
		if((a+1)*b == required){
			a++;
			total = a*b;
			break;
		}
		
		if(a*(b+1) == required){
			b++;
			total = a*b;
			break;
		}
		
			
		total = min((a+1)*b,a*(b+1));
//		cout << total << "\n";
		if((a+1)*b<a*(b+1))
			a++;
		else
			b++;
		
		}
		
		cout << total << "\n" << a << " " << b ;
		return 0;
	}

}
