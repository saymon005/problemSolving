#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(1)
    {
        cout<<n<<" ";
        if(n==1) break;
        if(n%2==0){
            n = n/2;
        }
        else{
            n = (3*n)+1;
        }
    }
    cout<<endl;
}
