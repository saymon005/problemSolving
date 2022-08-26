#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, x, y, diff, sum;
    cin>>n>>a>>x>>y;
    diff = (n-a);
    sum = ((a*x)+(diff*y));
    cout<<sum<<endl;

    return 0;
}
