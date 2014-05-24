#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int charnum;

    while(cin>>charnum){
        int changes = 0;
        int internum = 0;

        for(int i = 0 ; i < charnum ; i++){

            char tmp;
            cin>>tmp;
            if(tmp =='w'){
                internum ++;
            }else if(tmp =='b'){
                changes+=internum;
            }
        }

        cout<<changes<<endl;
    }


}
