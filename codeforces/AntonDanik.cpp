#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, count1 = 0;
    cin>>n;
    char s;
    for(int i = 0; i<n; i++)
    {
        cin>>s;
        if(s == 'D')
        {
            count++;
        }
        if(s =='A')
        {
            count1++;
        }

    }

    if(count<count1)
    {
        cout<<"Anton"<<endl;
    }
    if(count>count1)
    {
        cout<<"Danik"<<endl;

    }
    if(count==count1)
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}
