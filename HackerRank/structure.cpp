#include<bits/stdc++.h>
using namespace std;
struct students{
    int age;
    string s;
    string s1;
    int sd;

};

int main()
{
    students st;
    cin>> st.age;
    cin >> st.s;
    cin >> st.s1;
    cin >> st.sd;

    cout<<st.age<<" "<<st.s<<" "<<st.s1<<" "<<st.sd;
    return 0;
}
