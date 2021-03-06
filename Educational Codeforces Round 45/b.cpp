#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

multiset<int> s;
int a[N];

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
    s.insert(a[i]);
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    auto it = s.upper_bound(a[i] + k);
    bool has = 0;
    if (it != s.begin()) {
      it--;
      if (*it > a[i]) {
        has = 1;
      }
    }
    //printf("%d has %d\n", a[i], has);
    if (!has) ans++;
  }
  cout << ans << endl;
  return 0;
}
