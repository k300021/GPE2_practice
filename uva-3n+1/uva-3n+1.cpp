#include<bits/stdc++.h>

int main(void){

    unsigned long n, i, a, b, c, cycle, max;

    while (scanf("%ld%ld", &a, &b) == 2){

        printf("%ld %ld", a, b);

        if (a > b){

            c = a;
            a = b;
            b = c;
        }

        max = 0;
        for (i = a; i <= b; i++) {

            n = i;
            cycle = 1;

            while(n != 1){
                n = n % 2 ? 3 * n + 1 : n / 2;
                cycle++;
            }

            max = cycle > max ? cycle : max;
        }

        printf(" %ld\n", max);
    }

    return 0;
}
