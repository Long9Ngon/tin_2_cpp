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
	int T,n;
	cin>>T;
	while(T>0)
	{
		cin>>n;
		if(n%100==86)
			cout<<"1 ";
		else
			cout<<"0 ";
		cout<<"\n";
		T--;
	}
}
