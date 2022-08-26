#include<bits/stdc++.h>
using namespace std;
int main()
{
    int res, a, b;
    string s;
    cin>>s;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[1] == 'x')
        {
            a = s[0] - '0';
            b = s[2] - '0';
            res = a*b;
        }
    }
    cout<<res<<endl;
    return 0;
}
