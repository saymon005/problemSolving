#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<string, int>mp;
    int q;
    int x,mark;
    string name;
    cin>>q;
    for(int i = 0; i<q; i++)
    {

        cin>>x;

        if(x==1)
        {
            cin>>name;
            cin>>mark;
            mp[name] = mp[name] + mark;
        }

        if(x==2)
        {
            cin>>name;
            mp.erase(name);
        }
        if(x==3)
        {
            cin>>name;
            cout<<mp[name]<<endl;
        }

    }


return 0;
}

