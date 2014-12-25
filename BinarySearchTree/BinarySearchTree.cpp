#include <iostream>
#include <cstring>
using namespace std;

const int INF = 0x3f3f3f3f;

const int MAXN = 210;
int n;
int w[MAXN];
int sum[MAXN];
int f[MAXN][MAXN];


int main(){

    while (cin>>n) {

        sum[0] = 0;
        for (int i = 1; i <= n; ++i) {
            cin>>w[i];
            sum[i] = sum[i-1] + w[i];
        }

        memset(f, 0, sizeof(f));

        for (int d = 2; d <= n; ++d) {
            for (int l = 1; l + d - 1 <= n; ++l) {
                int r = l + d - 1;
                int ans = INF, tot = sum[r] - sum[l-1];
                for (int k = l; k <= r; ++k)
                    ans = min(ans, f[l][k-1] + f[k+1][r] + tot - w[k]);
                f[l][r] = ans;
            }
        }
        cout<<f[1][n]<<"\n" ;
    }
    return 0;
}
