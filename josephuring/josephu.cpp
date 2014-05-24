#include<iostream>

using namespace  std;


int josephu(int n,int m){
    int last =0;

    for(int i=1 ; i <= n ; i++){
        last = ( last + m ) % i;
    }

    return last;
}

int main(){
    int num;

    cin >> num;

    cout<<josephu(num,7);
}
