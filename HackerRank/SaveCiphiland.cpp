#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, j;
    cin>>t;

    for(j = 1; j<=t; j++)
    {
        string s;
        cin>>s;
        int n, k = 0, i, j;
        n = s.length();

        for(i = 0; i<n; i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                k++;
            }
        }

        for(int i=n+2; i>=k; i--)
        {
            s[i]=s[i-k];
        }

        cout<<"Case #"<<j<<": "<<s<<endl;
    }
    return 0;
}
