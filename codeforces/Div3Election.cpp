#include<bits/stdc++.h>
using namespace std;
int solution(int highest, int other1, int other2)
{
    return max(0, max(other1, other2) + 1 - highest);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        cout<<solution(a,b,c)<<' '<<solution(b,a,c)<<' '<<solution(c,a,b)<<endl;
    }

    return 0;
}
