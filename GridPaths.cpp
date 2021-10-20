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
char grid[1000][1000];
int waysDP(int n)
{

  ll dp[n][n];
  if (grid[0][0] == '.')
    dp[0][0] = 1;
  else
  {
    dp[0][0] = 0;
  }
  for (int i = 1; i < n; i++)
  {
    if (grid[i][0] == '.')
      dp[i][0] = dp[i - 1][0];
    else
      dp[i][0] = 0;
  }
  for (int i = 1; i < n; i++)
  {
    if (grid[0][i] == '.')
      dp[0][i] = dp[0][i - 1];
    else
      dp[0][i] = 0;
  }

  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (grid[i][j] == '.')
        dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
      else
        dp[i][j] = 0;
    }
  }

  return dp[n - 1][n - 1];
}
void solve()
{
  int n;
  cin >> n;
  fo(i, n)
          fo(j, n)
              cin >>
      grid[i][j];
  cout << waysDP(n) << endl;
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  //   cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}