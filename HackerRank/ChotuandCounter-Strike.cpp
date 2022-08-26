#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    map<string,int>cnt; //for counting who kill most
    map<string,int>cnt1; //for counting who died most
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s1,s2,s3;
        while(n--)
        {
           cin>>s1>>s2>>s3;
           cnt[s1]++;
           cnt1[s3]++;
        }
        auto it1 = cnt.begin();
        auto it= cnt.begin();
        int max = it->second;
        for(; it1!=cnt.end(); it1++)
        {
            if(it1->second>max)
            {
                max = it1->second;
                it=it1;
            }
        }
        cout<<it->first<<" ";

        auto temp=cnt1.begin();
        auto it2=cnt1.begin();
        max = it2->second;
        for(; it2!=cnt1.end(); it2++)
        {
            if(it2->second>max)
            {
                max=it2->second;
                temp=it2;
            }
        }
        cout<<temp->first<<endl;
        cnt.clear();
        cnt1.clear();
    }
    return 0;
}
