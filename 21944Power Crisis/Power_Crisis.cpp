#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include <cstring>
#include <queue>
using namespace std;


int n , m;
int work(int m)
{
    int i , a = 0;
    for(i = 2 ; i < n ; i++)
    {
        a = (a + m) % i;
    }
    return a;
}


int main()
{
    int t , i;

    while(scanf("%d",&n)!=EOF)
    {
        if(n == 0)break;
        for(i = 0 ; (t = work(i))!= 11 ; i++);
        printf("%d\n",i);
    }
    return 0;
}

