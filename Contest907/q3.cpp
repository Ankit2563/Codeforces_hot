#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <algorithm>
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
    vi a(n);
    inputi(0,n,a);
    ll ans=0;
    sort(a.begin(), a.end());
    int start=0,end = n - 1;
    int x = 0;
    while(start<end){
      
      if(a[start]==0){
            start++;
            continue;
      }
           if(x+a[start]<a[end]){
               x += a[start];
               ans += a[start];
               start++;
           }
           else{
               
               ans += (a[end]-x)+1;
               a[start] -= ((a[end] - x));
               a[end] = 0;
               end--;
               x = 0;
           }
        

    }

    if(a[end]>x){
           int count = 0;
           while (a[start] > x)
           {
               count++;
               x++;
               a[start]--;
           }
           ans += count;
    }
    if(a[end]!=0)
    ans++;

    cout << ans << endl;
}
int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    // solve();
}