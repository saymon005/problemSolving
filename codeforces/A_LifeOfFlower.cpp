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
        int k[n],  sum = 1;
        for(int i = 0; i<n; i++)
        {
            cin>>k[i];
        }

        for(int i = 0; i<n; i++)
        {
            if(k[i] == k[i+1] && k[i]==1)
            {
                sum = sum + 5;
            }
            else if(k[i]==k[i+1] && k[i]==0)
            {
                sum = -1;
                break;
            }
            if(k[i]==1 && k[i] != k[i+1])
            {
                sum++;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
