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
		int n,dem=0,tmp;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=n-1;i>0;i--)
			for(int j=0;j<i;j++)
				if(a[j]>a[j+1])
				{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
		for(int i=n-1;i>0;i--)
			if(a[i]-a[i-1]>1)
				dem += a[i]-a[i-1]-1;
		cout<<dem<<endl;
	}
	return 0;
}
