#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, count[26] = {0};
    string s;
    cin>>s;
    for(i =0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i] = s[i] - 'a';
            count[s[i]]++;
        }
    }

    for(i = 0; i<26; i++)
    {
        if(count[i]>0)
        {
            cout<<char(i + 'a')<<" : "<<count[i]<<endl;
        }

    }

    return 0;
}
