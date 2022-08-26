#include<bits/stdc++.h>
#define ll       long long int
#define lu       unsigned long long int
#define pb       push_back
#define pf       push_front
#define mod      1000000007
#define MAX      1000004
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;


    }

    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }

    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i-1][sum])
    {
        // Create a new vector to store path
        vector<int> b = p;
        printSubsetsRec(arr, i-1, sum, b);
    }

    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p);
    }
}

// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(int n, int sum)
{
    if (n == 0 || sum < 0)
       return;

    // Sum 0 can always be achieved with 0 elements
    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }

    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;

    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        printf("There are no subsets with sum %d\n", sum);
        return;
    }

    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    vector<int> p;
    printSubsetsRec(arr, n-1, sum, p);
}
*/

void solve()
{
    ll n,i,j,k,l,kk;
    cin>>n>>kk;
    set<ll>s;
    vector<ll>arr;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        arr.pb(x);
    }

    ll nn=arr.size();
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(i=0;i<nn;i++){
        for(j=i+1;j<nn;j++){
            for(k=j+1;k<nn;k++){
                for(l=k+1;l<nn;l++){
                    ll x=arr[i]+arr[j]+arr[k]+arr[l];
                    if(x==kk){
                        cout<<"Labeo bross, labeo !!"<<endl; return ;
                    }
                    if(x>k) break;
                }
            }
        }
    }

    cout<<"No labeo sorry 🙁"<<endl;
}

int main()
{
    fast;
    ll t=1,c=1;
    //cin>>t;
    while(t--)
    {
        //cout<<"Case : "<<c++;
        solve();
    }
    return 0;
}
