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
	int t;
	cin>>t;
	while(t--)
	{
		int n,dem=0;
		long x;
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
			if(a[i]==x)
				dem++;
		if(dem==0) cout<<"-1";
		else cout<<dem;
		cout<<endl;
	}
	return 0;
}
