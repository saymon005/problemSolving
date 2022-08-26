#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            s.erase(i);
            v.push_back(0);
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
            s.erase(i);
            s.erase(i+1);
            v.push_back(1);
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            s.erase(i);
            s.erase(i+1);
            v.push_back(2);
        }
    }
    for(int i=0;i<v.size();i++) cout<<v[i];
    return 0;
}
