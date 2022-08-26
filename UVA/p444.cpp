#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    for(int i=0;i<s.length();i++)
    {
        cout<<(int)s[i];
    }
}
