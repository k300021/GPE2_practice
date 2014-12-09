#include <iostream>
#define SIZE 1001

using namespace std;

int main()
{
    int n, max;

    int a[SIZE];
    int d[SIZE]; //the LOS of the i position



    while(cin >> n) {

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    max = 0;
    for (int i = 1; i <= n; i++)
    {
        d[i] = 1;
        for (int j = 1; j <= i - 1; j++)
        {
            if (a[j] < a[i] && d[i] == d[j]) // to see how much element is small then a[i] and count d[i]
            {
                d[i] = d[j] + 1;
            }
        }

        if (d[i] > max) max = d[i];
    }

    cout << max << endl;
    }

    return 0;
}
