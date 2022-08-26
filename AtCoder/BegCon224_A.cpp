#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a = s.length();
    if(s[a-2] == 'e' && s[a-1] == 'r')
        {
            cout<<"er"<<endl;
        }
        else if(s[a-3] == 'i' && s[a-2] == 's' && s[a-1] == 't')
        {
            cout<<"ist"<<endl;
        }

    return 0;
}
