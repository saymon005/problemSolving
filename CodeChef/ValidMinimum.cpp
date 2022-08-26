#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll arr[4];
       for(int i=0;i<3;i++){
        cin>>arr[i];
       }
       sort(arr,arr+3);
       //for(int i=0;i<3;i++) cout<<arr[i]<<" ";
       if(arr[0]==arr[1]) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}



