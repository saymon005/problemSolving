#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[4]={"ABC", "ARC", "AGC", "AHC" };
    long long arr[4]={0}, i;

    string s1,s2,s3;cin>>s1>>s2>>s3;
    for(i=0;i<4;i++)
    {
        if(s[i]==s1 || s[i]==s2 || s[i]==s3)
            arr[i]=1;
    }

    for(i=0;i<4;i++)
    {
        if(arr[i]==0)
            cout<<s[i]<<endl;
    }


    return 0;

}
