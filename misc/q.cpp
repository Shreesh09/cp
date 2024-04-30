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
    
    
int maxLength = -1;
void getcycle(vector<int> &edges,int si,vector<bool>& visit,vector<int>& store){
    if(si == -1)return ;
    if(visit[si]){
        int count = -1;
        for(int i =0;i<store.size();i++){
            if(store[i]==si){
                count = i;
                break;
            } 
        }
        
        if(count==-1)return;
        int size = (store.size()-count);
        maxLength = max(maxLength,size);
        return ;
    }
    visit[si] = true;
    store.push_back(si);
    getcycle(edges,edges[si],visit,store);
    return ; 
}  
    
int longestCycle(vector<int>& edges) {
    vector<bool> visit(edges.size(),0);
    for(int i =0;i<edges.size();i++){
        if(visit[i])continue;
        vector<int> store;
        getcycle(edges,i,visit,store);
    }      
    return maxLength;
}    
 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    while(t--) {
        maxLength = -1;
        ll n;
        cin >> n;
        vector<int> edges(n);
        REP(i, 0, n) {
            cin >> edges[i];
            edges[i]--;
        }

        cout<<longestCycle(edges)<<endl;
    }
    return 0;
}