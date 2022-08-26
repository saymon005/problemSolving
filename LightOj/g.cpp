#include<bits/stdc++.h>
#define ll    long long int
using namespace std;
int main()
{
    ll n;
    string s;
    while(1)
    {
        cin>>s;
        n = s.length();
        ll odd = 0, even = 0;
        if(s== "0")
        {
            break;
        }
        for(int i = 0; i<n; i++)
        {

            if(i%2==0)
            {
                odd += s[i] - '0';
            }
            else
            {
                even += s[i] - '0';
            }
        }

        if((odd - even)%11==0)
        {
            cout<<s<<" is a multiple of 11."<<endl;
        }
        else
        {
            cout<<s<<" is not a multiple of 11."<<endl;
        }


    }
    return 0;
}



