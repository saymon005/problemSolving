#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string>v(n);
        unordered_set<string>s;
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }

        for(int i = 0; i<n; i++)
        {
            if(v[i].size()==1)
            {
                cout<<"0";
                continue;
            }
            bool ans = true;
            for(int j=0; j<v[i].size(); j++)
            {
                string l = v[i].substr(0,j);
                string r = v[i].substr(j,v[i].size());
                if(s.count(l) && s.count(r))
                {
                    cout<<"1";
                    ans=false;
                    break;
                }
            }
            if(ans) cout<<"0";
        }
        cout<<endl;
    }
}
