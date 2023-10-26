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

int CountSteps(string s1, string s2, int size)
{
    int i = 0, j = 0;
    int result = 0;

    
    while (i < size)
    {
        j = i;

   
        while (s1[j] != s2[i])
        {
            j += 1;
        }


        while (i < j)
        {

         
            char temp = s1[j];
            s1[j] = s1[j - 1];
            s1[j - 1] = temp;
            j -= 1;
            result += 1;
        }
        i += 1;
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> st;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            st.insert(i);
        }
    }
    ll ans = 0;
    for (int  i=n - 1; i >= 0;i--){
         if(st.size()==0){
            cout << -1 << " ";
            continue;
         }
         auto it = st.rbegin();
         ans += (i - (*it));
         st.erase(*it);
         cout << ans << " ";
    }
    cout << endl;
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