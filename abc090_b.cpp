#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_palindromic_num(int num) {
  int s1 = num / 10000;
  num -= s1 * 10000;
  int s2 = num / 1000;
  num -= s2 * 1000;
  int s3 = num / 100;
  num -= s3 * 100;
  int s4 = num / 10;
  num -= s4 * 10;
  int s5 = num % 10;
  return s1 == s5 && s2 == s4;
}

int main() {
  int A, B;
  cin >> A >> B;

  int cnt = 0;
  for (int i = A; i < B + 1; i++) {
    if (is_palindromic_num(i)) {
      cnt++;
    }
  }

  cout << cnt << endl;
}

