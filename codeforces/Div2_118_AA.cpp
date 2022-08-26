#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    if(s1.size() != s2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] != s2[i])
        {
            cnt++;
        }
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(cnt==2 && s1==s2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
