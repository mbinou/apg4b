#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;

  int result = 1;
  rep(i, S.size()) {
    const char& w = S.at(i);
    if (w == '+') {
      result++;
    } else if (w == '-') {
      result--;
    }
  }
  cout << result << endl;
}

