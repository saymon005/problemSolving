#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(i>k)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    cout<<"YES"<<endl;
}
