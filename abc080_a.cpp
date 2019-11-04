#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int P1 = A * N;
  int P2 = B;

  if (P1 < P2) {
    cout << P1 << endl;
  } else {
    cout << P2 << endl;
  }
}
