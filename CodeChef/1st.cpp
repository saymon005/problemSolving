#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[1000],i,t=-1,Max;
	bool ch=false;
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>a[i];
	while(1){
		for(i=1;i<=n;i++){
			if(a[i]>0) ch=true;
			if(m>=a[i] && a[i]>0){
				a[i]=0;
				Max=i;
			}
			else{
				a[i]-=m;
			}
		}
		if(ch==false) break;
		ch=false;
	}
	cout<<Max;
	return 0;
}
