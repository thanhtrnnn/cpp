#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());   
        
        vector<int> ans(n);
        int idx = 0;
        for (int i = 0; i < n; i += 2)
            ans[i] = a[idx++];
        for (int i = 1; i < n; i += 2)
            ans[i] = a[idx++];
        for (int x : ans) cout << x << " ";
        cout << endl;
    }
}