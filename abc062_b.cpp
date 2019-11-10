#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void output_edge(int W) {
  rep(i, W + 2) cout << '#';
  cout << endl;
}

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> lines(H);
  rep(i, H) {
    string line;
    cin >> line;
    lines.at(i) = line;
  }

  output_edge(W);
  rep(i, H) cout << '#' << lines.at(i) << '#' << endl;
  output_edge(W);
}

