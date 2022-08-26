#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        while(n--)
        {
            int x;
            cin>>x;
            v.push_back(x);

        }
        int flg=1;
        for(int i=0;i<n;i++)
        {
            if(v[1]==5 && v[2]==10){
                flg = 0;
            }
            if (v[1]==10 && v[2]==15){
                flg=0;
            }
            else{
                flg=1;
            }
        }
        if(flg==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
