#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;

  string input;
  rep(i, H) {
    string S;
    cin >> S;
    input += S;
  }

  rep(i, H) {
    rep(j, W) {
      const char t = input.at(i * W + j);
      if (t == '#') {
        cout << t;
      } else {
        int cnt = 0;
        if (i > 0     && j > 0     && input.at((i - 1) * W + j - 1) == '#') cnt++;
        if (             j > 0     && input.at((i + 0) * W + j - 1) == '#') cnt++;
        if (i < H - 1 && j > 0     && input.at((i + 1) * W + j - 1) == '#') cnt++;
        if (i > 0     &&              input.at((i - 1) * W + j + 0) == '#') cnt++;
        if (i < H - 1 &&              input.at((i + 1) * W + j + 0) == '#') cnt++;
        if (i > 0     && j < W - 1 && input.at((i - 1) * W + j + 1) == '#') cnt++;
        if (j < W - 1 &&              input.at((i + 0) * W + j + 1) == '#') cnt++;
        if (i < H - 1 && j < W - 1 && input.at((i + 1) * W + j + 1) == '#') cnt++;
        cout << cnt;
      }
      if (j == W - 1) cout << endl;
    }
  }
}

