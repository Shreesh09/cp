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
 
int main(void)
{
    init_code();
    int t = 0;
    cin >> t;
    while(t--)
    {
        int a, b, x1, y1, x2, y2;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        
        vector<pair<int, int>> kp;
        kp.push_back({x1 - a, y1 - b});
        kp.push_back({x1 - b, y1 - a});
        kp.push_back({x1 + b, y1 - a});
        kp.push_back({x1 + a, y1 - b});
        kp.push_back({x1 + a, y1 + b});
        kp.push_back({x1 + b, y1 + a});
        kp.push_back({x1 - b, y1 + a});
        kp.push_back({x1 - a, y1 + b});

        // for(auto i : kp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        vector<pair<int, int>> qp;
        qp.push_back({x2 - a, y2 - b});
        qp.push_back({x2 - b, y2 - a});
        qp.push_back({x2 + b, y2 - a});
        qp.push_back({x2 + a, y2 - b});
        qp.push_back({x2 + a, y2 + b});
        qp.push_back({x2 + b, y2 + a});
        qp.push_back({x2 - b, y2 + a});
        qp.push_back({x2 - a, y2 + b});
        // cout<<endl;
        // for(auto i : qp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        set<pair<int,int>> count;

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if(kp[i].first == qp[j].first && kp[i].second == qp[j].second)
                {
                    count.insert(kp[i]);
                }
            }
        }

        cout<<count.size()<<endl;
    }
    return 0;
}