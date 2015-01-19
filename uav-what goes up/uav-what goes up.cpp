#include<algorithm>
#include<iostream>

#define NUM_MAX 1000000

using namespace std;

int Mynum[NUM_MAX ], M[NUM_MAX ], M_id[NUM_MAX ], pre_pos[NUM_MAX ];

void output(int end) {
    if(end < 0) return;
    output(pre_pos[end]);
    cout<<Mynum[end]<<endl;
}

int main() {

    int length = 0, last = 0;

    for(int i = 0;; i++) {
        if(cin>> Mynum[i]){
            int pos = lower_bound(M, M + length, Mynum[i]) - M;
            M[pos] = Mynum[i];
            M_id[pos] = i;
            pre_pos[i] = pos > 0? M_id[pos - 1] : -1;
            if(pos == length) {
                length++;
                last = i;
            }
        }else{
            break;
        }

    }
    cout<<length<<endl<<"-\n";
    output(last);
}
