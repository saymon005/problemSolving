#include <bits/stdc++.h>
using namespace std;

int main (void) {
  int N;
  cin >> N;
  vector<int> P(N), Q(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }
  for (int i = 0; i < N; i++) {
    Q[P[i] - 1] = i + 1;
  }
  for (int i = 0; i < N; i++) {
    cout << Q[i];
    if (i != N - 1) {
      cout << ' ';
    }
  }
  cout << endl;
}
