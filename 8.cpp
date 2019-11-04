#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, price, N;
  cin >> p;

  if (p == 1) {
    cin >> price >> N;
  } else if (p == 2) {
    string text;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
  }
  cout << price * N << endl;
}

