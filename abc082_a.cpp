#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int c, d;
  c = ( a + b ) * 10 / 2;
  d = c / 10;
  if (c % 10 > 4) {
    d++;
  }
  cout << d << endl;
}

