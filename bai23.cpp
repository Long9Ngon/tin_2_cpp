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
		int n,j=0;	
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=0;
		}
		for(int i=0;i<n;i++)
			if(a[i]!=0)
			{
				b[j]=a[i];
				j++;
			}
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
