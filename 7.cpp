#include <bits/stdc++.h>
using namespace std;

int main() {
  // $BJQ?t(Ba,b,c$B$K(Btrue$B$^$?$O(Bfalse$B$rBeF~$7$F(BAtCoder$B$H=PNO$5$l$k$h$&$K$9$k!#(B
  bool a = true; // true $B$^$?$O(B false
  bool b = false; // true $B$^$?$O(B false
  bool c = true; // true $B$^$?$O(B false

  // $B$3$3$+$i@h$OJQ99$7$J$$$3$H(B

  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }

  if (!a && b) {
    cout << "Bo";
  }
  else if (!b || c) {
    cout << "Co";
  }

  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  else if (!a || c) {
    cout << "der";
  }

  cout << endl;
}

