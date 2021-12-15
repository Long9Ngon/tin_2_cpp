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
long a[1000000] ;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long n,x,i;
		cin>>n>>x;
		for( i=1;i<=n;i++)
			cin>>a[i];
		int test=0;
		for( i=1;i<=n;i++)
			if(a[i]==x)
			{
				cout<<i;
				test=1;
				break;
			}
		if(test==0)
			cout<<"-1";
		cout<<endl;
	}
	return 0;
}
