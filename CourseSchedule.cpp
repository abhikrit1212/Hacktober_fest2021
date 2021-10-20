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
void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
}
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<int> adj[n + 1];
  vector<int> indegree(n + 1, 0);
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
    indegree[v]++;
  }
  queue<int> q;
  for (int i = 1; i <= n; i++)
  {
    if (indegree[i] == 0)
    {
      q.push(i);
    }
  }
  vector<int> list;
  while (!q.empty())
  {
    int u = q.front();
    q.pop();
    list.push_back(u);
    for (auto v : adj[u])
    {
      indegree[v]--;
      if (indegree[v] == 0)
      {
        q.push(v);
      }
    }
  }
  if (list.size() != n)
    cout << "IMPOSSIBLE" << endl;
  else
  {
    for (int i = 0; i < n; i++)
      cout << list[i] << " ";
  }
  cout << endl;
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
