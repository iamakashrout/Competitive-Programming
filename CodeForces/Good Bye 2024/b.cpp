#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(2));
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        if (v[i][0] == v[i][1])
        {
            mp[v[i][0]]++;
        }
    }
    vector<ll> temp;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        temp.push_back(it->first);
    }
    string ans(n, '0');
    for (ll i = 0; i < n; i++)
    {
        ll l = v[i][0];
        ll r = v[i][1];
        if (l == r)
        {
            if (mp[l] <= 1)
            {
                ans[i] = '1';
            }
        }
        else
        {
            ll ind1 = lower_bound(temp.begin(), temp.end(), l) - temp.begin();
            ll ind2 = upper_bound(temp.begin(), temp.end(), r) - temp.begin();
            ll len = ind2 - 1 - ind1 + 1;
            if (len < (r - l + 1))
            {
                ans[i] = '1';
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}