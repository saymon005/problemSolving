#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll s1,s2,s3,a,b,c,res;
    cin>>s1>>s2>>s3;
    a = sqrt((s1*s3)/s2);
    b = sqrt((s1*s2)/s3);
    c = sqrt((s2*s3)/s1);
    res = 4*(a+b+c);
    cout<<res<<endl;
    return 0;
}
