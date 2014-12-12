#include<iostream>

using namespace std;

#define MAX_MUM 14

int main(){
    int numper[MAX_MUM][MAX_MUM][MAX_MUM]={0};
    int time;

    numper[1][1][1] =1;

    for(int n=2; n<=13;n++){
        for(int l=1 ; l<=n ; l++){
            for(int r =1; r <=n ; r++){
                numper[n][l][r]= numper[n-1][l][r]*(n-2)+numper[n-1][l-1][r]+numper[n-1][l][r-1];

            }
        }
    }

    cin >>time;

    while(time--){
        int n,r,l;
        cin>>n>>l>>r;
        cout<<numper[n][l][r]<<endl;

    }

    return 0;

}
