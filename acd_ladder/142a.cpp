#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long int ll;
 
void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
 
int main(void) {
    init_code();

    ll s, n;
    cin >> s >> n;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    REP(i, 0, n) {
        int ds, b;
        cin >> ds >> b;
        pq.push({ds, b});
    }

    while(!pq.empty()) {
        if(pq.top().first >= s)
            break;
        s += pq.top().second;
        pq.pop();
    }

    cout<<(pq.empty()?"YES":"NO")<<endl;
    
    return 0;
}