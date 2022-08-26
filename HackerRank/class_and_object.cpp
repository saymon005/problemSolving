#include<bits/stdc++.h>
using namespace std;
class student{
public:
    int m[5];
    int sum;
    student()
    {
        sum = 0;
    }
    void input()
    {
        for(int i = 0; i<5; i++)
        {
            cin>>m[i];
            sum += m[i];
        }

    }
    int calculateTotalScore()
    {
        return sum;
    }
};

int main()
{
    int n;
    cin>>n;
    student *s = new student[n];
    for(int i = 0; i<n; i++)
    {
        s[i].input();
    }
    int kris_score = s[0].calculateTotalScore();

    int cnt = 0;
    for(int i = 1; i<n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kris_score)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
