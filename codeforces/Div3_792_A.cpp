#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count = 1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a = s.length();
        if(a%2==0)
        {
            string x,y;
            for(int i = 0; i<s.length()/2; i++)
            {
                x+=s[i];
            }
            for(int i = s.length()/2; i<s.length(); i++)
            {
                y+=s[i];
            }
            if(x==y)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
