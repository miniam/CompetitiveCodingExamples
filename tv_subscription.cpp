#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define vec vector
#define uset unordered_set
#define umap unordered_map
#define eb emplace_back
#define pb push_back
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define repi(a, b, c) for (ll i = a; i < b; i += c)
#define repj(a, b, c) for (ll j = a; j < b; j += c)
#define mod 1000000007

void solve() {
    test {
        int n, k, d;
        cin >> n >> k >> d;

        vec<int> a(n);
        map<ll, int> ans;
        queue<ll> que;
        vec<int> final_ans;

        int length = INT_MAX;
        repi(0, n, 1) cin >> a[i];

        int track = 1;

        repi(0, n, 1) {
            ans[a[i]]++;
            que.push(a[i]);

            if (track >= d) {
                ll num = que.front();

                final_ans.push_back(ans.size());

                if (ans[num] == 1)
                    ans.erase(num);
                else
                    ans[num]--;

                que.pop();
            }
            track++;
        }

        cout << *min_element(final_ans.begin(), final_ans.end()) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}