#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=97 && s[i]<=122){
            s[i]<<k;
        }
        if(s[i]>=65 && s[i]<=90){
            s[i]<<k;
        }
    }
    cout<<s<<endl;
}

/*
11
middle-Outz
2

okffng-Qwvb

*/
