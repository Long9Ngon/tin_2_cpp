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
		long n,i,j,tmp;
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=n-1;i>0;i--)
			for(j=0;j<i;j++)
				if(a[j]>a[j+1])
				{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
		int test=0;
		for(i=1;i<n;i++)
			if(a[i]-a[i-1]>0)
			{
				cout<<a[0]<<" "<<a[i];
				test=1;
				break;
			}
		if(test==0) cout<<"-1";
		cout<<endl;	
	}
	return 0;
}
