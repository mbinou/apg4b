#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int T = N;

  int sum = 0;
  for (int i = 8; i >= 0; i--) {
    int R = 1;
    for (int j = 0; j < i; j++) {
      R *= 10;
    }
    int nr = T / R;
    if (nr > 0) {
      sum += nr;
    }
    T -= nr * R;
  }

  if (N % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

