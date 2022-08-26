#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, x, count = 0;
    cin>>n>>a;
    int ar[n];
    int br[a];
    for(int i = 1; i<=n; i++)
    {
        cin>>ar[i];
        for(int j = 1; j<=a; j++)
        {
            cin>>br[j];

            if(ar[i]>br[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
