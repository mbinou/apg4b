#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;

  int result = 0;
  rep(i, N) {
    int x;
    cin >> x;

    int tmp_a = x * 2;
    int tmp_b = (K - x) * 2;
    result += (tmp_a > tmp_b) ? tmp_b : tmp_a;
  }
  cout << result << endl;
}

