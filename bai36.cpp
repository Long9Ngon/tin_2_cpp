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
		int n,m;
		cin>>n>>m;
		long long a[n],b[m],c[n+m],tmp;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int j=0;j<m;j++)
			cin>>b[j];
		for(int i=0;i<n;i++)
			c[i]=a[i];
		int j=0;
		for(int i=n;i<n+m;i++)
		{
			c[i]=b[j];
			j++;
		}
		for(int i=n+m-1;i>0;i--)
			for(j=0;j<i;j++)
				if(c[j]>c[j+1])
				{
					tmp=c[j];
					c[j]=c[j+1];
					c[j+1]=tmp;
				}
		for(int i=0;i<n+m;i++)
			cout<<c[i]<<" ";
		cout<<endl;	
	}
	return 0;
}
