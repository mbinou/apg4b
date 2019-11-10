#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int push(const vector<int>& a, int idx, int cnt) {
  if (cnt >= a.size()) return -1;
  if (idx == 1) return cnt;
  int next_idx = a.at(idx) - 1;
  cnt++;
  return push(a, next_idx, cnt);
}

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) {
    cin >> a.at(i);
  }

  cout << push(a, 0, 0) << endl;
}

