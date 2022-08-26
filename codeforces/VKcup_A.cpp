#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s= "abcdefghijklmnopqrstuvwxyz";
    string s1;
    for(int i=0;i<n;i++)
    {
        s1+=s[i%k];
    }
   cout<<s1<<endl;

   return 0;
}
