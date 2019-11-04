#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  int min = INT_MAX;
  rep(i, N) {
    int A;
    cin >> A;

    int cnt = 0;
    for (int j = 1; A / (int)pow(2, j) >= 1; j++) {
      if (A % (int)pow(2, j) != 0) {
        break;
      }
      cnt++;
    }
    if (cnt < min) {
      min = cnt;
    }
  }

  cout << min << endl;
}

