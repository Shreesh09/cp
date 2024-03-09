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
        vector<vector<char>> grid(10, vector<char>(10));
        long long score = 0;
        REP(i, 0, 10) {
            REP(j, 0 ,10) {
                cin >> grid[i][j];

            }
        }

        int offset = 0;
        while(offset < 5) {
            for(int j = 0 + offset; j < 10 - offset; j++) {
                    if(grid[offset][j] == 'X')
                        score += offset + 1;
            }

            for(int i = 1 + offset; i < 10 - offset; i++) {
                    if(grid[i][offset] == 'X')
                        score += offset + 1;
            }

            for(int j = 1 + offset; j < 10 - offset; j++) {
                    if(grid[9 - offset][j] == 'X')
                        score += offset + 1;
            }

            for(int i = 1 + offset; i < 9 - offset; i++) {
                    if(grid[i][9 - offset] == 'X')
                        score += offset + 1;
            }
            offset++;
        }

        cout<<score<<endl;
        
    }    
    return 0;
}