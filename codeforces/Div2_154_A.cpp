#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    ll n,m;
    cin>>n>>m;
    if(n==m)
    {
        for(int i=0;i<n;i++)
         {
           cout<<"BG";
         }
    }
   else{
      if(n>m)
    {
          n-=m;
        while(m--)
         {
           cout<<"BG";
         }
        while(n--)
         {
           cout<<"B";
         }

    }
    else
    {
        m-=n;
        while(n--)
         {
           cout<<"GB";
         }
         while(m--)
         {
           cout<<"G";
         }

    }

   }

   return 0;
}
