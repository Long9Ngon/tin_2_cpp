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
	int T;
	cin>>T;
	while(T--)
	{
		long n,i,j,tmp;
		cin>>n;
		for(i=0;i<n-1;i++)
			cin>>a[i];
//		for(i=n-2;i>0;i--)
//			for(j=0;j<i;j++)
//				if(a[j]>a[j+1])
//				{
//					tmp=a[j];
//					a[j]=a[j+1];
//					a[j+1]=tmp;
//				}
		if(a[0]>1) cout<<"1";
		if(a[0]==1)
		{
			int test =0;
			for(i=0;i<n-2;i++)
				if(a[i+1]-a[i]>1)
				{
					cout<<a[i]+1;
					test=1;
					break;
				}
			if(test==0)
				cout<<a[n-2]+1;
		}
		cout<<endl;
	}
	return 0;
}
