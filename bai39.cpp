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
long a[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long n,X;
		cin>>n>>X;
		for(long i=1;i<=n;i++)
			cin>>a[i];
		int t = -1;
		for(long i=1;i<=n;i++)
			if(a[i]==X)
			{
				t=1;
				break;
			}
			cout<<t<<endl;
	}
	return 0;
}
