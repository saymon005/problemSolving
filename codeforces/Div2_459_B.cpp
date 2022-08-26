#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string, string> ipname;
    for(int i=0;i<n; i++)
    {
        string sname, ipadd;
        cin>>sname>>ipadd;
        ipname[ipadd] = sname;
    }
    while(m--)
    {
        string sname1, ipadd1;
        cin>>sname1>>ipadd1;
        ipadd1.pop_back();
        cout<<sname1<<" "<<ipadd1<<"; #"<<ipname[ipadd1]<<endl;
    }
    return 0;
}
