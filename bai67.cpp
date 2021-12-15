/*
 Pham Xuan Long
 B19DCAT117
 23
 35
 D19CQAT01-B
 Long Pham
 phamlongthd@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin>>n ;
		int tmp=0;
		int i=2,a[3],j=0;
		while(n>1)
		{
			int dem = 0;
			while(n%i==0)
			{
				n/=i;
				dem++;
			}
			if(dem>1)
			{
				break;
			}
			if(dem==1)
			{
				a[j]=i;
				j++;
				tmp++;
			}
			i++;
		}
		if(tmp==3) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}

