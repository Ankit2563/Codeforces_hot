#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
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
void inputl(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputi(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputvv(int k, int p, int n, int m, vector<vector<int>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}
void inputvvc(int k, int p, int n, int m, vector<vector<char>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    map<string, int> m;

    vector<string> v;
    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto i:m){
        v.pb(i.first);
    }
    if(m.size()==1){
        cout << 0 << endl;
        return;
    }
    long long ans = 0;
    for (int i = 0; i < v.size();i++){
        string s1=v[i];
        for (int j = i+1; j < v.size();j++){
            string s2 = v[j];
            if(s1[0]==s2[0]&&s1[1]!=s2[1]){
                ans += m[s1] *1LL* m[s2];
            }
           else if(s1[0]!=s2[0]&&s1[1]==s2[1]){
                ans += m[s1] *1LL* m[s2];
            }
            
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}