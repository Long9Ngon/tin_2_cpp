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

unsigned long long BCNN(unsigned long long a,unsigned long long b)
{
	unsigned long long c=a*b;
	while (a*b!=0)
	{
		if(a>b) a%=b;
		else b%=a;
	}
	return c/(a+b);
}
int main()
{
	int T;
	unsigned long long n,i;
	cin>>T;
	while(T>0)
	{
		int dapan =1; 
		cin>>n;
		for(i=1;i<=n;i++)
			dapan=BCNN(dapan,i);		
		cout<<dapan<<endl;
		T--;
	}
	return 0;
}
