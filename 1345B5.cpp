#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,h,s,b;
	for(cin>>t;t--;){
		cin>>n;
		for(s=0,b=n;b>1;s++){
			h=floor((sqrt(1+24*b)-1)/6);
			b=b-(h*(3*h+1))/2;
		}
		cout<<s<<endl;
	}
}
