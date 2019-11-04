#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  int G = 0, W = 0, Y = 0, P = 0;
  rep(i, N) {
    string S;
    cin >> S;
    if (S == "G") {
      G = 1;
    } else if (S == "W") {
      W = 1;
    } else if (S == "Y") {
      Y = 1;
    } else if (S == "P") {
      P = 1;
    }
  }

  if (G + W + Y + P == 3) {
    cout << "Three" << endl;
  } else {
    cout << "Four" << endl;
  }
}

