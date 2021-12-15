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
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,Q;
		cin>>n>>Q;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];	
		int l,r;
		while(Q--)
		{
			int kq=0; 
			cin>>l>>r;
			for(int i=l;i<=r;i++)
				kq += a[i];
			cout<<kq<<endl;
		}
	}
	return 0;
}
