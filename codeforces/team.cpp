#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c, count = 0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b == 2 || b+c == 2 || a+c ==2)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
