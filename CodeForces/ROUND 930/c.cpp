#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1e9+7;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mx_pos = 0;
        for (ll i = 1; i <= n - 1; i++)
        {
            cout << '?' << ' ' << mx_pos << ' ' << mx_pos << ' ' << i << ' ' << i << endl;
            char curr;
            cin >> curr;
            if (curr == '<')
            {
                mx_pos = i;
            }
        }
        ll j = 0;
        vector<ll> isPossible;
        for (ll i = 0; i < n; i++)
        {
            cout << '?' << ' ' << mx_pos << ' ' << i << ' ' << mx_pos << ' ' << j << endl;
            char curr;
            cin >> curr;
            if (curr == '>')
            {
                j = i;
                isPossible.clear();
                isPossible.push_back(i);
            }
            else if (curr == '=')
            {
                isPossible.push_back(i);
            }
        }
        if (isPossible.size() == 1)
        {
            cout << '!' << ' ' << mx_pos << ' ' << j << endl;
        }
        else
        {
            ll mn_pos = isPossible[0];
            for (ll i = 1; i < isPossible.size(); i++)
            {
                cout << '?' << ' ' << mn_pos << ' ' << mn_pos << ' ' << isPossible[i] << ' ' << isPossible[i] << endl;
                char curr;
                cin >> curr;
                if (curr == '>')
                {
                    mn_pos = isPossible[i];
                }
            }
            cout << '!' << ' ' << mx_pos << ' ' << mn_pos << endl;
        }
    }
    return 0;
}