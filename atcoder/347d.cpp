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
    ll a, b, c;
    cin >> a >> b >> c;
    string binaryA = "", binaryB = "";
    while(c > 0) {
        int bit = c&1;
        if(bit) {
            if(a == 0 && b == 0) {
                cout<<-1<<endl;
                return 0;
            }
            if(a > b) {
                binaryA = "1" + binaryA;
                binaryB = "0" + binaryB;
                a--;
            } else {
                binaryA = "0" + binaryA;
                binaryB = "1" + binaryB;
                b--;
            }
        } else {
            binaryA = "0" + binaryA;
            binaryB = "0" + binaryB;
        }
        c = c>>1;
    }

    if(a != b) {
        cout<<-1<<endl;
        return 0;
    }

    for(int i = binaryA.length()-1; i >= 0 && a > 0; i--) {
        if(binaryA[i] == binaryB[i] && binaryA[i] == '0') {
            binaryA[i] = binaryB[i] = '1';
            a--;
            b--;
        }
    }

    // cout<<binaryA<<" "<<binaryB<<endl;
    // cout<<a<<" "<<binaryA.length()<<endl;
    if(a + binaryA.length() > 64) {
        cout<<-1<<endl;
        return 0;
    }

    while(a > 0) {
        binaryA = "1" + binaryA;
        binaryB = "1" + binaryB;
        a--;
    }

    int ansA = 1, ansB = 1;
     for(int i = binaryA.length()-2; i >= 0; i--) {
        if(binaryA[i] == '1')
            ansA *= i;
        if(binaryB[i] == '1')
            ansB *= i;
     }

     if(ansA > 60 || ansB > 60) {
        cout<<-1<<endl;
        return 0;
     }

    ll nA = stoll(binaryA,0, 2), nB = stoll(binaryB,0, 2);
    cout<<nA<<" "<<nB<<endl;
    return 0;
}