#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

#define max 10000

int main(){
    int testcase;

    cin>> testcase;

    while(testcase--){
        int num;
        int myarray[max];

        cin >>num;

        bool istrue = true;

        for(int i=0 ; i<num ; i++){
            cin >>myarray[i];
        }

        sort(myarray,myarray+num,greater<int>() );

        for ( int i=0; i<num; i++ ) {
            if ( myarray[i]>0 )
                for ( int j=i+1; j<num; j++ ) {
                    myarray[j]--;
                    myarray[i]--;
                    if ( myarray[j]<0 ) istrue =false;
                    if ( myarray[i]==0 ) break;
            }
            if ( myarray[i]!=0 ) istrue = false;
            sort(myarray+i+1,myarray+num,greater<int>());
        }
        if(istrue) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }



}
