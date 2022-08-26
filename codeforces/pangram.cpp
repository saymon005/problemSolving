#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int ch[26] = {0};
    for(int i =0; i<t; i++)
    {
        if(s[i]<97)
        {
            s[i] = s[i] + 32;
            ch[s[i] - 'a'] +=1;
        }
        else
            ch[s[i] - 'a'] +=1;

    }
    for(int i =0; i<26;i++)
    {
        if(ch[i] == 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

        return 0;
}
