#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            if(b>c)
            {
                cout<<a-a<<" "<<a-b+1<<" "<<a-c+1<<endl;
            }
        }
        if(b>a && b>c)
        {
            if(a>c)
            {
                cout<<b-a+1<<" "<<b-b<<" "<<b-c+1<<endl;
            }
        }
        if (c>a && c>b)
        {
            if(a>b)
            {
                cout<<c-a+1<<" "<<c-b+1<<" "<<c-c<<endl;
            }
        }

        return 0;
    }

}
