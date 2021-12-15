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
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int dem=0,tmp=1;
		for(int i=0;i<n;i++)
			{
				for(int j=tmp;j<n;j++)
					if(a[i]+a[j]==k)
						dem++;
				tmp++;		
			}
		cout<<dem<<endl;
	}
	return 0;
}
