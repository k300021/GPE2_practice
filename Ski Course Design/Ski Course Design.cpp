/*
ID: k3000214
LANG: C++
TASK: skidesign
*/

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

#define MAX_N 1000
#define MAX_H 101
#define MIMCOST 1000000

int mount[MAX_N];


int main(void)
{
    ifstream fin("skidesign.in");

    int num;

    int total=MIMCOST;

    fin>>num;

    for(int i=0 ; i<num ; i++){
        fin>>mount[i];
    }

	fin.close();

	for(int i=0 ; i<83 ; i++){
		int cost=0;
		int tmp;
		for(int j=0 ; j<num; j++){
			if(mount[j]<i){
				tmp = i-mount[j];
			}else if(mount[j]>i+17) {
				tmp = mount[j]-i-17;

			}else tmp =0;

			cost += tmp*tmp;

		}

		total = min(total,cost);

	}

    ofstream fout("skidesign.out");
    fout << total << "\n";
    fout.close();
    return 0;
}
