#include <bits/stdc++.h>
#define N 2000000
using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> f(N);
  while (n--) {
    int l, r;
    cin >> l >> r;
    f[l]++;
    f[r + 1]--;
  }
 for(int i=1;i<N;i++)
 {
     f[i]+=f[i-1];
     f[i-1]=(f[i-1]>=k)?1:0;
 }
for(int i=1;i<N;i++)
 {
     f[i]+=f[i-1];
 }
//   int cnt = 0;
//   for (int i = 0; i < f.size(); i++) {
//     cnt += f[i];
//     f[i] = (cnt >= k) ? 1 : 0;
//   }
//   vector<int> p(N);
//   for (int i = 1; i < p.size(); i++) {
//     p[i] = f[i-1] + p[i-1];
    
//   }
//   for(auto i:p)
//   {
//       cout<<i<<" ";
//   }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << f[r] - f[l-1] << endl;
  }
  return 0;
}
// 3 2 2
// 91 94
// 92 97
// 97 99
// 92 94
// 3
// 93 97
// 3
// 95 96
// 0
// 90 100
// 4
