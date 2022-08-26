#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    int cnt=0;
    int i=1;
    sum+=i;
     while(i<=5)
    {
            if(sum%(n+1) !=1)
            {
                cnt++;
            }
            sum++;
            i++;
    }
    cout<<cnt<<endl;
}
