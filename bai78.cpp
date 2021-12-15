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
bool fibonaxi( int x)
{
	if(x==0||x==1)
		{
			return true; 
		}
	int fx=1,f1=1,f0=0;
	while(fx<x)
	{
		fx=f1+f0;
		f0=f1;
		f1=fx;
	}
	if(fx==x)
		return true;
	else
		return false;
}
int main()
{
	int T;
	cin>>T;
	while(T>0)
	{
		int n,i;
		cin>>n;
		int A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		for(i=0;i<n;i++)
			if (fibonaxi(A[i]))
				cout<<A[i]<<" ";
		cout<<"\n";
		T--;
	}
	return 0;
}
