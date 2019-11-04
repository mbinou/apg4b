#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;

  int result = 1;
  rep(i, N) {
    int tmp_a = result * 2;
    int tmp_b = result + K;
    result = (tmp_a > tmp_b) ? tmp_b : tmp_a;
  }
  cout << result << endl;
}

