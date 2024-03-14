#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
void init_code()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
}

void sol(set<int>& ans, vector<vector<int>>& vis, int i, int pos, int n, vector<pair<int,char>> v) {
    if(i >= v.size()) {
        ans.insert(pos);
        return;
    }
    
    if(vis[pos][i]) {
        return;
    }
    int op = pos;
    int dis = v[i].first;
    char dir = v[i].second;

    dis = dis % n;
    if(dir != '?') {
        if(dir == '0') {
            pos += dis;
            if(pos > n)
                pos = pos % n;
        } else {
        // cout<<pos<<endl;
            pos -= dis;
                    // cout<<pos<<endl;

            if(pos <= 0)
                pos = n + pos;
        }
        sol(ans, vis, i+1, pos, n, v);
    } else {
        int pos1 = pos + dis;
        if(pos1 > n)
                pos1 = pos1 % n;
        sol(ans, vis, i+1, pos1, n, v);
        int pos2 = pos - dis;
        if(pos2 <= 0)
            pos2 = n + pos2;
        sol(ans, vis, i+1, pos2, n, v);
    }
    vis[op][i] = 1;
}

int main(void)
{
    init_code();
    int t = 0;
    cin >> t;
    while(t--)
    {
        int n, l, s;
        cin >> n >> l >> s;
        vector<pair<int,char>> A(l);
        int j = 1;
        REP(i, 0, l)
        {
            cin >> A[i].first >> A[i].second;
        }

        // for(auto i : A) {
        //     cout<<i.first<<i.second<<endl;
        // }

        set<int> ans;
        vector<vector<int>> vis(n+1, vector<int>(l, 0));
        sol(ans, vis, 0, s, n, A);
        cout<<ans.size()<<endl;
        for(auto i : ans)
            cout << i << " ";
        cout<<endl;
    }
    return 0;
}