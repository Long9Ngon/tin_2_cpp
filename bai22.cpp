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
		long n;
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++)
			b[i]=-1;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(i==a[j])
					b[i]=a[j];
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
			 
	}
	return 0;
}
