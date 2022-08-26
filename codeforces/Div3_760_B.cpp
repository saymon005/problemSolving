#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s[n+4];
        for(int i = 0; i< n-2; i++)
        {
            cin>>s[i];
        }
        string res;
        res = s[0];
        int count = 0;
        for(int i = 1; i<n-2; i++)
        {
            int z = res.size()-1;
            if(res[z] == s[i][0])
            {
                res += s[i][1];
            }
            else
            {
                count = 1;
                res+= s[i];
            }
        }
        if(count ==0)
        {
            res+='a';
        }
        cout<<res<<endl;

    }


    return 0;
}
