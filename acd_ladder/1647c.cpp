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
    int t = 0;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> A(n, vector<ll>(m));
        for(int i = 0; i < n; i++) {
            string str;
            cin >> str;
            for(int j = 0; j < m; j++) {
                A[i][j] = str[j] - '0';
            }
        }

        if(A[0][0]) {
            cout<<-1<<endl;
            continue;
        }

        vector<string> ans;
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-2; j >= 0; j--) {
                if(!A[i][j+1])
                    continue;
                string str = to_string(i+1) + " " + to_string(1 + j) + " " + to_string(1 + i) + " " + to_string(1 + j+1);
                ans.push_back(str);
            }
        }

        for(int i = n-2; i >= 0; i--) {
            if(!A[i+1][0])
                continue;
            string str = to_string(1 + i) + " " + to_string(1 + 0) + " " + to_string(1 + i+1) + " " + to_string(1 + 0); 
            ans.push_back(str);
        }

        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < m; j++) {
        //         if(i == 0 && j == 0)
        //             continue;
        //         if(!A[i][j]) {
        //             string str = to_string(1 + i) + " " + to_string(1 + j) + " " +  to_string(1 + i) + " " + to_string(1 + j);
        //             ans.push_back(str); 
        //         }
        //     }
        // } 

        cout<<ans.size()<<endl;
        for(string s : ans)
            cout<<s<<endl;
    }
    return 0;
}