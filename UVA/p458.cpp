#include<bits/stdc++.h>
using namespace std;
void print(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        char c = (s[i]-7);
        cout<<c;
    }
    cout<<endl;
}
int main()
{
    string s;


    while(getline(cin,s, '\n'))
    {
        print(s);

    }


    return 0;

}
