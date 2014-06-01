#include<iostream>
#include <stdlib.h>

using namespace std;

int compare  (const void * a, const void * b)
{
    return *(int *)a < *(int *)b;
}

int main(){
    int in;
    int num = 0;
    int set[10000] = {0};
    while(cin >> in){
        set[num++] = in;

        if(num-1 == 0){
            cout <<in<< endl;
        }
        else{
            qsort(set, num, sizeof(int), compare);
            cout << set[num/2] <<endl;
        }
        if(cin >> in){
            set[num++] = in;
            qsort(set, num, sizeof(int), compare);
            cout << (set[num/2 -1]+set[num/2 ]) / 2 <<endl;
        }else break;

    }

}
