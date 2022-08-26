#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, cnt = 0;
        cin>>n>>k;
        string s,s1, s2;
        cin>>s;
        while(k--)
        {
            s1 = s;
            reverse(s.begin(), s.end());
            s2 = s1 + s;
            if(s1==s2)
            {
               cnt++;
            }

        }

        cout<<cnt<<endl;
    }
    return 0;
}
