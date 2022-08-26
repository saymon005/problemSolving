#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll low, high, c, i, t, n, N;
    double sum = 0, avg, DA, DL, DH, DB;
    cin>>t;
    for(c =0; c<t; c++)
    {
        cin>>n>>low>>high;
        double arr[1005];
        for(i = 0; i<n; i++)
        {
            cin>>arr[i];
            sum = sum + arr[i];

        }

        avg = (double)sum / n;
        ll flag = 0;
        cout<<"Case "<<c+1<<":"<<endl;
        cout<<setprecision(2)<<fixed;

        for(i = 0; i<n; i++)
        {
            DA = abs(arr[i] - avg);
            DL = abs(arr[i] - low);
            DH = abs(arr[i] - high);
            DB = min(DL,DH);
            if(DB<DA)
            {
                flag = 1;
                cout<<arr[i]<<endl;
            }

        }

        if(flag ==0)
        {
            cout<<"No outliers"<<endl;
        }

    }

    return 0;
}
