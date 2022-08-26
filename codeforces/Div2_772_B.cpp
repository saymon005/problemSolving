#include<bits/stdc++.h>
#define ll    long long int
#define lu    unsigned long long int
#define pr    pair<int, int>
#define st    set<int>
#define mst   multiset<int>
#define mp    map<int, int>
#define vi    vector<int>
#define pb    push_back
#define pf    push_front
#define mod   1000000007
#define MAX   1000004
#define f     first
#define sc    second
#define endl  "\n"
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
void solve()
{
   ll c = 0, n;
   cin>>n;
   ll arr[n];
   for(int i = 0; i<n; i++)
   {
      cin>>arr[i];
   }
   for(int i = 1; i<n-1; i++)
   {
      if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
      {
         c++;
         if((i+2)<n)
         {
            arr[i+1] = max(arr[i], arr[i+2]);
         }
         else
         {
            arr[i+1] = arr[i];
         }
      }
   }

   cout<<c<<endl;
   for(int i = 0; i<n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
         solve();
    }
    return 0;
}

