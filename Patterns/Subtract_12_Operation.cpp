#include <bits/stdc++.h>
#define ll long long int
#define nd cout << "\n"
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define x.all (x).begin(), (x).end()
#define pii pair<int, int>
#define vi vector<int>
#define rep(i, a, b) for (long long int i = a; i < b; i++)
#define re(i, a, b) for (long long int i = a; i >= b; i--)
#define pVec(v)           \
    for (auto e : v)      \
        cout << e << " "; \
    cout << "\n"
#define aut(e, v) for (auto e : v)
using namespace std;
ll tan()
{
    ll n;
    cin >> n;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll mi = a[0];
    ll i;
    rep(i, 1, n)
    {
        if (a[i] < mi)
        {
            mi = a[i];
        }
    }
    

    return mi-i-1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        cout << tan() << endl;
    }
    return 0;
}