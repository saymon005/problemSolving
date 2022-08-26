#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,cnt=0;
    cin>>n;
    while(1)
    {
        cnt++;
        //cout<<n<<" ";
        if(n==1) break;
        if(n%2==0){
            n = n/2;
        }
        else{
            n = (3*n)+1;
        }
    }
    cout<<cnt<<endl;
}

