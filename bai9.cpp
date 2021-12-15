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
#include<cmath>
int nto(int n)
{
	if(n<=1)
		return 0;
	if(n>1)
	{
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return 0;
	}
	return 1;
}
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=2;i<=sqrt(n);i++)
			if(nto(i)) cout<<i*i<<" ";
		cout<<endl;
	}
	return 0;
}
