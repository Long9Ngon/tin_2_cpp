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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int max=a[0];
		for(int i=0;i<n;i++)
			if(a[i]>max)
				max=a[i];
		cout<<max<<endl;
	}
}
