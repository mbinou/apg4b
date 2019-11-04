#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin >> s;
  int o = 0;
  if (s / 100 > 0) {
    s = s - 100;
    o++;
  }
  if (s / 10 > 0) {
    s = s - 10;
    o++;
  }
  if (s > 0) o++;
  cout << o << endl;
}

