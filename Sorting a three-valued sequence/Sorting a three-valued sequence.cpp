/*
ID: k300021
PROG: sort3
LANG: C++
*/

#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

#define MAX_NUM 1000

int myarray[MAX_NUM];

void switchtwo(int* p, int* q){
    int tmp;
    tmp = *p;
    *p=*q;
    *q=tmp;
}

int main(){


    ifstream fin ("sort3.in");
    ofstream fout ("sort3.out");
    int num;
    int switchnum=0;

	int numo=0,numt=0;
	fin >>num;

	for(int i=0 ; i<num ;i++){
        fin >>myarray[i];

        if(myarray[i]==1){
            numo++;

        }else if(myarray[i]==2){
            numt++;
        }
	}


    fin.close();

    for(int i=numo;i<num ; i++){
        int tmp;
        if(myarray[i]==1){
            for(int j=0;j<numo;j++){
                if(myarray[j]==2){
                    tmp=j;
                    break;
                }else if(myarray[j]==3){
                    tmp=j;
                }
            }
            switchtwo(&myarray[i],&myarray[tmp]);
            switchnum++;

        }
    }



    for(int i=numo+numt;i<num;i++){

        if(myarray[i]==2) switchnum++;

    }





    fout << switchnum <<endl;
	fout.close();



}
