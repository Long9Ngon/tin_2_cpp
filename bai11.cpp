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
#include<cstring>
using namespace std; 
int main()
{
	int T,i;
	cin >> T;
	char *X = new char[10001];
	char *Y = new char[10001];
	int *z = new int[10002];
	while(T>0)
	{
		int nho=0;
		cin>>X;
		cin>>Y;
		if(strlen(X)>=strlen(Y))
		{
			for(int i=strlen(X);i>0;i--)
			{
				z[i]=X[i]+Y[i]-'0'+nho;
				if(z[i]>10) z[i]=z[i]-10; 
				nho=(X[i]+Y[i]-'0'+nho)/10;
			}
			for(int i=strlen(X);i>0;i--)
				cout<<z[i]<<" ";
		}
		else if(strlen(Y)>strlen(X))
		{
			for(int i=strlen(Y);i>0;i--)
			{
				z[i]=X[i]+Y[i]-'0'+nho;
				if(z[i]>10) z[i]=z[i]-10; 
				nho=(X[i]+Y[i]-'0'+10)/10;
			}
			for(int i=strlen(Y);i>0;i--)
				cout<<z[i]<<" ";
		}
		T--;
	}
	return 0;
}
