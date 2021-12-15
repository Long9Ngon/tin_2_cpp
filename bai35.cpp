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
		long a[n],b[m];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		long max=a[0],min=b[0];
		for(int i=1;i<n;i++)
			if(a[i]>max)
				max=a[i];
		for(int i=1;i<m;i++)
			if(b[i]<min)
				min=b[i];
		cout<<max*min<<endl;
	}
	return 0;
}
