#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b;
  char o;
  cin >> a >> o >> b;
  int result = (o == '+') ? (a + b) : (a - b);
  cout << result << endl;
}

