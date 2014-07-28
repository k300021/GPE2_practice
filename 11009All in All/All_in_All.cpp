#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    string num1,num2;
    while(cin >> num1,cin>>num2){

        if(num1.length() >= num2.length()){
            cout << "No"<<endl;
            continue;
        }
        int num =0;
        string::iterator it = num1.begin();
        char tmpchar = *it;
             for (string::iterator it2 = num2.begin(); it2 < num2.end(); it2++) {
                char tmpchar2 = *it2;

                if(tmpchar == tmpchar2){
                    it++;
                    if(it > num1.end()) break;
                    tmpchar = *it;
                    num++;
                }
             }

        int tmp = num1.length();
        if( num == tmp ) cout << "Yes" <<endl;
        else cout << "No" <<endl;

    }




}
