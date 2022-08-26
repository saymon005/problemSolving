#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,res,sum=0,ans;
    cin>>n>>k;
    res= 240-k;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*5);

        if(sum>res){
            ans = i-1;
            cout<<ans<<endl;
               return 0;
        }

    }
     cout<<n<<endl;
}
