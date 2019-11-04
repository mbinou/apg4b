#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int N1, N2, N3, N4;
  N1 = N / 1000;
  N -= N1 * 1000;
  N2 = N / 100;
  N -= N2 * 100;
  N3 = N / 10;
  N -= N3 * 10;
  N4 = N;

  if (N2 != N3) {
    cout << "No" << endl;
  } else {
    if (N1 == N2 || N4 == N2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
