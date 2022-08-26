#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[20];
    long long H = 0, B = 0, B3 = 0, Hr = 0;
    long long r = 4;
    for(int i = 0; i<4; i++)
    {
          cin>>s1;
          if(s1=="H")
          H++;
          if(s1 == "2B")
          B++;
            if(s1 == "3B")
            B3++;
            if(s1 == "HR")
            Hr++;
    }

    if(H==1 && B==1 && B3 ==1 && Hr ==1)
        {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
