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
long a[10000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long n,x,i;
		cin>>n>>x;
		for(i=1;i<=n;i++) cin>>a[i];
		for(i=1;i<=n;i++)
			if(a[i]==x)
			{
				cout<<i;
				break;
			}
			cout<<endl;
	}
	return 0;
}
