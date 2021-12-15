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
using namespace std ; 
int main()
{ 
	int T; 
	cin>>T; 
	while(T--)
	{ 
		long a,b; 
		long long c; 
		cin>>a>>b>>c; 
		long i=1; 
		for(int j=0;j<b;j++)
			i=(i*a)%c;  
	cout<<i<<endl; 
	} 
}
