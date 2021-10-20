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
void dfs1(vi adj[], int u, stack<int> &st, bool visited[])
{
  visited[u] = true;
  for (int v : adj[u])
  {
    if (visited[v] == false)
    {
      dfs1(adj, v, st, visited);
    }
  }
  st.push(u);
}
void dfs2(vi adj[], int u, bool visited[], vi &list)
{
  visited[u] = true;
  //   cout<<u <<" ";
  list.push_back(u);
  for (int v : adj[u])
  {
    if (visited[v] == false)
    {
      dfs2(adj, v, visited, list);
    }
  }
}
void solve()
{
  int n, m, u, v;
  cin >> n >> m;
  vi adj[n + 1];
  vi adjTrans[n + 1];
  fo(i, m)
  {
    cin >> u >> v;
    adj[u].push_back(v);
    adjTrans[v].push_back(u);
  }
  stack<int> st;
  bool visited[n + 1];
  for (int i = 0; i <= n; i++)
    visited[i] = false;
  for (int i = 1; i <= n; i++)
  {
    if (visited[i] == false)
    {
      dfs1(adj, i, st, visited);
    }
  }
  for (int i = 0; i <= n; i++)
    visited[i] = false;
  // Transpose of graph
  // Reverse Edges
  vi list;
  vi res;
  while (!st.empty())
  {
    int u = st.top();
    st.pop();
    if (visited[u] == false)
    {
      dfs2(adjTrans, u, visited, list);
      if (list.size() == n)
      {
        cout << "YES" << endl;
        return;
      }
      res.push_back(u);
    }
    list.clear();
  }
  cout << "NO" << endl;
  cout << res[1] << " " << res[0] << endl;
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
