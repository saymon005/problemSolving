#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i = 0; i< s.length(); i=i+2)
        {
            cout<<s[i];

        }
        cout<<" ";
        for(int i = 1; i< s.length(); i=i+2)
        {
            cout<<s[i];

        }
        cout<<endl;
    }


    return 0;
}
