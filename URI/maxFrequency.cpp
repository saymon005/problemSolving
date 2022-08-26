#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
    cin>>c;
    string s;
    getline(cin,s);
    s=c+s;
    string tmp;
    vector<string>v;
    for(auto u:s)
    {
        if(isspace(u)){
            v.push_back(tmp);
            tmp.clear();
        }
        else{
            tmp+=u;
        }
    }
    v.push_back(tmp);

    map<string,int>m;
    int maxfreq=0;
    for(auto u:v){
        m[u]++;
        maxfreq=max(maxfreq,m[u]);
    }
    string ans;
    for(auto u:v)
    {
        if(m[u]==maxfreq){
            ans=u;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
    }
}
