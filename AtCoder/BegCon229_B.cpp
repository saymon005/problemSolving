#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll sum, j, i;
    string s1, s2;
    cin>>s1>>s2;
    if(s1.length()<s2.length())//s2 small
    {
       string temp = s1;
       s1 = s2;
       s2 = temp;
    }
    j= s2.length()-1;
    for(i=s1.length()-1; j>=0; i--,j--)
    {
        ll x = s1[i] - '0';
        ll y = s2[j] - '0';
        sum = x + y;
       // cout<<sum<<endl;;
        if(sum >= 10)
        {
            i=1;
            break;
        }

    }
    if(i==1)
        cout<<"Hard";
    else
        cout<<"Easy";


    return 0;
}
