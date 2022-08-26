#include<bits/stdc++.h>
using namespace std;
class students{
private:
    int age;
    string s;
    string s1;
    int sd;
public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }

    void set_s(string f1)
    {
        s = f1;
    }
    string get_s()
    {
        return s;
    }

    void set_s1(string f2)
    {
        s1 = f2;
    }
    string get_s1()
    {
        return s1;
    }

    void set_sd(int sd1)
    {
        sd = sd1;
    }
    int get_sd()
    {
        return sd;
    }

    string to_string()
    {
        stringstream ss;
        ss<<age<<","<<s<<","<<s1<<","<<sd;

        return ss.str();
    }

};

int main()
{
    students st;
    int age;
    string s;
    string s1;
    int sd;

    cin>>age;
    cin>>s;
    cin>>s1;
    cin>>sd;

    st.set_age(age);
    st.set_s(s);
    st.set_s1(s1);
    st.set_sd(sd);

    cout<<st.get_age()<<endl;
    cout<<st.get_s1()<<", "<<st.get_s()<<endl;
    cout<<st.get_sd()<<endl;
    cout<<endl;

   cout<< st.to_string();

    return 0;

}
