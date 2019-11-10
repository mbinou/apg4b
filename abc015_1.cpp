#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;

  string result = (A.size() < B.size()) ? B : A;
  cout << result << endl;
}

