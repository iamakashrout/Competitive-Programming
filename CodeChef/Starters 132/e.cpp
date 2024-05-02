#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n]=0;
    if (a[0] == 0)
    {
        cout << 0 << " ";
        for (ll i = 1; i <= n; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
        return;
    }
    vector<ll> ans;
    ll i = 0;
    while (i < n && a[i] > 0)
    {
        ans.push_back(a[i]);
        i++;
    }
    ll steps = 0;
    bool check = true;
    while (i <= n)
    {
        if (check == false)
        {
            ans.push_back(-1);
            i++;
            continue;
        }
        if (a[i] == 0)
        {
            ans.push_back(steps);
            ll j = i;
            while (true)
            {
                j = j / 2;
                steps++;
                if (j == 0)
                {
                    if (a[j] > 1)
                    {
                        a[i]++;
                        a[j]--;
                    }
                    else
                    {
                        check = false;
                    }
                    break;
                }
                else
                {
                    if (a[j] > 1)
                    {
                        a[i]++;
                        a[j]--;
                        break;
                    }
                }
            }
        }
        else
        {
            ans.push_back(steps + a[i]);
        }
        i++;
    }
    for (ll i = 0; i <= n ; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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