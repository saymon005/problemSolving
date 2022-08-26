#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;

    cin>>i2;
    cin>>d2;
    fflush(stdin);
    getline(cin>>ws, s2);

    int sum = i + i2;
    double sum1 = d + d2;
    string sum2 = s + s2;

    cout<<sum<<endl;
    cout<<fixed<<setprecision(1)<<sum1<<endl;
    cout<<sum2<<endl;

    return 0;
}
