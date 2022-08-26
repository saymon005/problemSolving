#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    cin>>s>>s1;
    for(int i =0; i<s.length(); i++)
    {
        s[i] = towlower(s[i]);
        s1[i] = towlower(s1[i]);
    }

    if(s == s1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i = 0; i< s.length(); i++)
        {
            if (s[i]<s1[i])
            {
                cout<<"-1"<<endl;
                break;
            }
            if(s[i]>s1[i])
            {
                cout<<"1"<<endl;
                break;
            }
        }
    }


    return 0;
}
