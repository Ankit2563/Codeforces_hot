#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI (ld)2 * acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void input(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputvv(int i, int m, int n, vector<vector<long long>> &v)
{
    for (int k = i; k < n; k++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[k][j];
        }
    }
}
void mapping(vector<int>&a,map<int,int>&m){
    for (int i = 0; i < a.size();i++){
        m[a[i]]++;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    input(0, n, a);
    map<int, int> m;
    ll ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        m[a[i]-i]++;
        ans = ans + m[a[i] - i] - 1;
    }
   
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}