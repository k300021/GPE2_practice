#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> fibTable;

    fibTable.push_back(0);
    fibTable.push_back(1);
    for (int i=2; i<=39; i++)
        fibTable.push_back(fibTable[i - 1] + fibTable[i - 2]);


    cin >> n;
    for (int i=0; i<n; i++) {
        int num;
        bool start = false;

        cin >> num;
        cout << num << " = ";
        for (int j=39; j>=2; j--) {
            if (num >= fibTable[j]) {
                num -= fibTable[j];
                cout << 1;
                start = true;
            }
            else if (start)
                cout << 0;
        }
        cout << " (fib)" << endl;
    }

    return 0;
}
