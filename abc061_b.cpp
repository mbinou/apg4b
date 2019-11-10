#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> town(N, 0);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    town.at(a-1)++;
    town.at(b-1)++;
  }

  rep(i, N) cout << town.at(i) << endl;;
}

