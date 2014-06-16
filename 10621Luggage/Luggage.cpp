#include<iostream>
#include<stdio.h>
#include <sstream>

using namespace std;


int main(){
    int around;
    cin >> around;
    getchar();
    //scanf("%d",&around);
    for(int i=0 ; i < around ; i++){
        int sum = 0,num,train[30],state[201]= {0};
        char *tmp;
        string stringnum;

        getline(cin,stringnum);
        istringstream in(stringnum);

        num = 0;
        while(in >> train[num]) sum+=train[num],num++;

        state[0]=1;

        if( sum%2 ==0 ){
            sum/=2;
            for(int i =0 ; i < num ; i++){
                for(int j = sum ; j>=train[i];j--){
                    if(state[ j-train[i] ]){
                        state[j]=1;
                    }
                }
            }

        }
        if(state[sum]) cout<<"YES" << endl;
        else cout <<"NO" << endl;


        //cout<<stringnum<<endl;



    }

}
