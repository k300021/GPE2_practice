/*
ID: k300021
PROG: castle
LANG: C++
*/

#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

#define MAX_NUM 50


const int WMASK = 1 << 0;
const int NMASK = 1 << 1;
const int EMASK = 1 << 2;
const int SMASK = 1 << 3;

void setmap(int i,int j,int plat[][MAX_NUM],int rommset[][MAX_NUM],int roomsize[MAX_NUM*MAX_NUM+1],int setnum){

    if(rommset[i][j]!=0) return;

    rommset[i][j] = setnum;
    roomsize[setnum] ++;

    if((plat[i][j]& NMASK) ==0){
        setmap(i-1,j,plat,rommset,roomsize,setnum);

    }
    if((plat[i][j]& WMASK) ==0){
        setmap(i,j-1,plat,rommset,roomsize,setnum);
    }
    if((plat[i][j]& SMASK )==0){
        setmap(i+1,j,plat,rommset,roomsize,setnum);
    }
    if((plat[i][j]& EMASK) ==0){
        setmap(i,j+1,plat,rommset,roomsize,setnum);
    }


}



int main(){


    ifstream fin ("castle.in");
    ofstream fout ("castle.out");

    int w,h;
    int roonum,maxrmsize=0,newmax=0;
	int plat[MAX_NUM][MAX_NUM]={0};
	int roomset[MAX_NUM][MAX_NUM] = {0};
	int roomsize[MAX_NUM*MAX_NUM+1]={0};
	int setnum =0;
	int lcr, lr, lc, ldir;
	fin >>w>>h;

	for(int i=0; i<h; i++){
        for(int j=0 ; j<w ; j++){
            fin>>plat[i][j];
        }
	}


	for(int i=0; i<h; i++){
        for(int j=0 ; j<w ; j++){

            if(roomset[i][j]==0){
                setmap(i,j,plat,roomset,roomsize,++setnum);
                if(roomsize[setnum]>maxrmsize)
                    maxrmsize = roomsize[setnum];

            }

	}
        }
    for (int j = 0;j < w;j++){
       for (int i = h - 1;i >= 0;i--){
           if (plat[i][j] & NMASK && i != 0 && roomset[i - 1][j] != roomset[i][j]){
               if (roomsize[roomset[i - 1][j]] + roomsize[roomset[i][j]] > newmax){
                   newmax= roomsize[roomset[i - 1][j]] + roomsize[roomset[i][j]];
                   lr = i;
                   lc = j;
                   ldir = NMASK;
               }
           }
           if (plat[i][j] & EMASK && i != w - 1 && roomset[i][j + 1] != roomset[i][j]){
               if (roomsize[roomset[i][j + 1]] + roomsize[roomset[i][j]] > newmax){
                   newmax = roomsize[roomset[i][j + 1]] + roomsize[roomset[i][j]];
                   lr = i;
                   lc = j;
                   ldir = EMASK;
               }
           }
       }
    }

    fout << setnum << "\n" << maxrmsize << "\n" << newmax << "\n" << lr + 1 << " " << lc + 1 << " ";

    if (ldir == NMASK) fout << "N\n";
    else fout << "E\n";





	fin.close();



}
