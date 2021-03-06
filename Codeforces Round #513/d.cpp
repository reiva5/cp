#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

long long a[N], b[N];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%lld %lld", a + i, b + i);
  sort(a, a + n);
  sort(b, b + n);
  long long ans = n;
  for (int i = 0; i < n; i++) {
    ans += max(a[i], b[i]);
  }
  cout << ans << endl;
  return 0;
}
