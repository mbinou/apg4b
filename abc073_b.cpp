#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int sum = 0;
  rep(i, N) {
    int l, r;
    cin >> l >> r;
    sum += r - l + 1;
  }
  cout << sum << endl;
}

