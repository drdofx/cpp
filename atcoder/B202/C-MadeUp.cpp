#include <bits/stdc++.h>

using namespace std;

int main() {
   int n; cin >> n;
   vector<int> a(n), b(n), c(n);
   for(int i=1; i<=n; i++) cin >> a[i];
   for(int i=1; i<=n; i++) cin >> b[i];
   for(int i=1; i<=n; i++) cin >> c[i];
   vector<int> count(n);
   for(int i=1; i<=n; i++) count[b[c[i]]]++;
   for(int i=1; i<=n; i++) cout << count[b[c[i]]] << ' '; 
   long long ans=0;
   for(int i=1; i<=n; i++) count[a[i]];
   for(int i=1; i<=n; i++) cout << count[a[i]] << ' '; 
   cout << ans << endl;
   return 0;

}