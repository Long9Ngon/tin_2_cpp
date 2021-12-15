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
		int n;
		cin>>n;
		long a[n],tmp;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=n-1;i>0;i--)
			for(int j=0;j<i;j++)
				if(a[j]>a[j+1])
				{
					tmp=a[j+1];
					a[j+1]=a[j];
					a[j]=tmp;
				}
		int min = a[n-1]-a[n-2];
		for(int i=n-1;i>0;i--)
			if(a[i]-a[i-1]<min)
				min = a[i]-a[i-1];
		cout<<min<<endl; 
	}
	return 0;
}
