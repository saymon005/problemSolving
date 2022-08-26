#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pos = -1;
    string s = "oxx";
    cin>>s;
    int n = s.length()-1;
    for(int i=0; i<n; i++)
    {
        if(s[0] == 'o' || s[1] == 'x' || s[2] == 'x')
        {
            cout<<"Yes";
            break;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }


    return 0;
}
