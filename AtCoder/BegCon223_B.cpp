#include <iostream>
using namespace std;

string shift(string s) {
    char l = s[0];
    for(int i=0; i<s.length()-1; i++) {
        s[i] = s[i+1];
    }
    s[s.length()-1] = l;
    return s;
}

int main()
{
    string s, min, max, update;
    cin>>s;
    min = s;
    max = s;
    update = shift(s);
    while(1) {
        if(update == s) {
            break;
        }
        if(min>update) {
            min = update;
        }
        if(max<update) {
            max = update;
        }
        update = shift(update);
    }
    cout<<min<<endl;
    cout<<max<<endl;
}
