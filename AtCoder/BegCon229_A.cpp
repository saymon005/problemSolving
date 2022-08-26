#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    for(int i = 0; i<s1.length(); i++)
    {
        if(s1[i] == s2[i] || s1[i]==s1[i+1] || s2[i]==s2[i+1])
        {
            cout<<"Yes"<<endl;
            break;
        }
        else
        {
            cout<<"No"<<endl;
            break;
        }

    }

    return 0;
}
