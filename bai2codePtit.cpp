/*
 Pham Xuan Long
 B19DCAT117
 23
 35
 D19CQAT01-B
 Long Pham
 phamlongthd@gmail.com
 */

#include<iostream>
using namespace std;

int main ()
{
	int T;
	long long a,b,c;
	cin>>T;
	while(T>0)
	{
		cin>>a>>b;
		c=a*b;
		// tim UCLN bang cach lap den khi mot trong hai so bang 0 
		while (a*b!=0)
		{
			if(a>b) a%=b;
			else b%=a;
		}
		cout<<c/(a+b)<<" "<<(a+b)<<endl;
		//BCNN = tich a,b luc dau chia UCLN
		//UCLN = a+b boi vi luc nay a hoac b da bang 0
		T--;
	}
	return 0;
}
