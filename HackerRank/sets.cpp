#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>s;
    int q;
    cin>>q;
    for(int i = 0; i<=q; i++)
    {
        string z;
        int x,y;
        getline(cin, z);

        if(z.size()>1)
        {
            istringstream ss(z);
            ss>>x>>y;
        }

        switch(x)
        {
        case 1:
            s.insert(y);
            break;
        case 2:
            s.erase(y);
            break;
        case 3:
            set<int>::iterator it = s.find(y);
            if(it == s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }

        }

    }
    return 0;
}
