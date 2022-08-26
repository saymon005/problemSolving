#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<10)
    {
        cout<<"AGC00"<<n<<endl;
    }
    if(n>=10 && n<=41)
    {
        cout<<"AGC0"<<n<<endl;
    }

    if(n>=42 && n<= 54)
    {
        cout<<"AGC0"<<n+1<<endl;
    }


    return 0;
}
