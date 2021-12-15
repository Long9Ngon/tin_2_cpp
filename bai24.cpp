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
		int k,n,z=0;
		cin>>k>>n;
		long A[k][n];
		for(int i=0;i<k;i++)
			for(int j=0;j<n;j++)
				cin>>A[i][j];
		long B[k*n];
		for(int i=0;i<k;i++)
			for(int j=0;j<n;j++)
			{
				B[z]=A[i][j];
				z++;
			}
		long tmp;
		for(int i=k*n-1;i>=0;i--)
			for(int j=0;j<i;j++)
			{
				if(B[j]>B[j+1])
				{
					tmp=B[j];
					B[j]=B[j+1];
					B[j+1]=tmp;
				}
			}
		for(int i=0;i<k*n;i++)
			cout<<B[i]<<" ";
		cout<<endl;
	}
} 
