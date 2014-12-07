/*
ID: k3000214
LANG: C++
TASK: combo
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int count;

bool intwo(int a,int b){
    if(abs(a-b) <= 2) return true;
    else if(abs(a-b) >=count-2) return true;
    else return false;

}

bool open(int a1,int a2,int a3,int b1,int b2,int b3){

    return intwo(a1,b1)&&intwo(a2,b2)&&intwo(a3,b3);

}




int main (){
    ifstream fin("combo.in");
    ofstream fout("combo.out");


    int a1,a2,a3,m1,m2,m3;
    int b1,b2,b3;

    int times=0;

    fin>>count;

    fin>>a1>>a2>>a3>>m1>>m2>>m3;


    for( b1 =1 ; b1<=count; b1++){
        for( b2 =1; b2<=count ; b2++ ){
            for( b3 =1; b3<=count ; b3++){
                if(open(b1,b2,b3,a1,a2,a3)||open(b1,b2,b3,m1,m2,m3))
                    times ++;
            }
        }

    }

    fout << times << "\n";
    fout.close();

    return 0;





}
