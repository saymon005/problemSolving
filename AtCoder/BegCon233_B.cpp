#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin>>l>>r;
    string s;
    cin>>s;
    for(int i = 1; i<s.length(); i++)
    {
        swap(s[l-1], s[r-1]);
    }
    cout<<s;

    return 0;
}
