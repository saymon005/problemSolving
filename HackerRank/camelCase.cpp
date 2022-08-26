#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt=1;
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    // saveChangesInTheEditor
}
