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

int k,X[1000],n; 

void resuilt(){
	for(int i=1;i<=k;i++)
		cout<<X[i]<<" ";
	cout<<endl; 
} 
void Try ( int i ){
	for (int j =X[i-1]+1; j<=n-k+ i; j++){
		X[i] = j;
		if ( i ==k)
			resuilt(); 
		else
			Try (i+1);
	}
}
int main(){
	X[0]=0; 
	cin>>n>>k;
	Try(1); 
	return 0; 
} 


