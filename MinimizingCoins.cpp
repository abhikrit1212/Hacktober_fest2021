/**
 * CODE
 * BY
 * VIKAS VERMA
 * 
 * $$Always Check for Constraints
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define REP(l, r) for (int i = l; i < r; i++)
#define printclock cerr << "Time : " << 1000 * (ld)clock() / (ld)CLOCKS_PER_SEC << "ms\n"
#define jaldi ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef long long ll;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
vi g[N];
int a[N];
//=======================
void solve()
{
  int n, x;
  cin >> n >> x;
  int a[n];
  fo(i, n)
          cin >>
      a[i];
  int dp[x + 1];
  dp[0] = 0;
  Fo(i, x)
      dp[i] = INT32_MAX;
  for (int i = 1; i <= x; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[j] <= i)
      {

        int res = dp[i - a[j]];
        if (res != INT32_MAX)
        {
          dp[i] = min(dp[i], res + 1);
        }
      }
    }
  }
  if (dp[x] == INT32_MAX)
    cout << -1 << endl;
  else
    cout << dp[x] << endl;
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  // cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}