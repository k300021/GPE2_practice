#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

using namespace std;

class mychar{
    public:

    mychar (char tmp,int tmpvalue){
        value = tmp;
        time = tmpvalue;
    }

    char value;
    int time;

};

bool MyDataSortPredicate(const mychar& d1, const mychar& d2)
{
   if(d1.time > d2.time) return true;

   else if(d1.time == d2.time) return d1.value < d2.value;

   else return false;
}

int main(){
    vector<mychar> tmpvector;

    int linenum;
    char linechar[1024];

    while(cin >> linenum){
        for(int i =0 ; i <=linenum ; i++){

            string tmp;
            std::getline (cin,tmp);

            for (string::iterator it = tmp.begin(); it < tmp.end(); it++) {
                char tmpchar = toupper(*it);

                if(tmpchar>= 65 && tmpchar <=90){
                    unsigned index;
                    for (index=0; index<tmpvector.size(); index++){

                        if(tmpvector.at(index).value == tmpchar){
                            tmpvector.at(index).time++;
                            break;
                        }

                    }
                    if(index == tmpvector.size()){
                        mychar tmpelement = mychar(tmpchar,1);
                        tmpvector.push_back(tmpelement);
                    }

                }

            }
        }
        std::sort(tmpvector.begin(), tmpvector.end(), MyDataSortPredicate);
        for (unsigned i=0; i<tmpvector.size(); i++){
            cout << tmpvector.at(i).value <<" " <<tmpvector.at(i).time <<endl;
        }
    }





}
