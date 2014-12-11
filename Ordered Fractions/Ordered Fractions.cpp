/*
ID: k300021
PROG: frac1
LANG: C++
*/

#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

#define MAX_NUM 160


ofstream fout ("frac1.out");

void findtheset(int n1,int d1,int n2, int d2,int max){
    if(d1+d2>max) return;


    findtheset(n1,d1,n1+n2,d1+d2,max);
    fout<<n1+n2<<"/"<<d1+d2<<endl;
    findtheset(n1+n2,d1+d2,n2,d2,max);

}


int main(){


    ifstream fin ("frac1.in");
    int num;


	fin >>num;
    fin.close();

    fout<<"0/1"<<endl;
    findtheset(0,1,1,1,num);
    fout<<"1/1"<<endl;

	fout.close();



}
