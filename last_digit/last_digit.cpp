#include<bits/stdc++.h>
using namespace std;

const int a[20] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7, 0, 1, 7, 0, 6, 1, 7, 4, 8, 7};

char s[105];

int main()
{
    int len, b, c;
    while (gets(s), s[0] != '0')
    {
        len = strlen(s);
        if (len == 1) b = s[0] -'0';
        else b = atoi(s + len - 2);

        printf("%d\n", (b / 10 * 7 + a[b % 20]) % 10);
    }
    return 0;
}
