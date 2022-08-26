#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    while(cin>>s && s!="*"){
            cnt++;
        if(s=="Hajj") cout<<"Case "<<cnt<<": "<<"Hajj-e-Akbar"<<endl;
        else cout<<"Case "<<cnt<<": "<<"Hajj-e-Asghar"<<endl;
    }
}
