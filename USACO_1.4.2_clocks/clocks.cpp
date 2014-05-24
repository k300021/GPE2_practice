/*
ID: k300021
PROG: clocks
LANG: C++
*/
#include <fstream>
#include <string.h>
using namespace std;

ifstream fin ("clocks.in");
ofstream fout ("clocks.out");

int main(){
	int a[9],b[9],s[9],ans[27],t=0,temp;

	memset(ans,0,sizeof(ans));

	bool check=true;

	for(int i=0;i<9;i++)
		fin>>a[i];

	for(s[0]=0;s[0]<4;s[0]++){
	for(s[1]=0;s[1]<4;s[1]++){
	for(s[2]=0;s[2]<4;s[2]++){
	for(s[3]=0;s[3]<4;s[3]++){
	for(s[4]=0;s[4]<4;s[4]++){
	for(s[5]=0;s[5]<4;s[5]++){
	for(s[6]=0;s[6]<4;s[6]++){
	for(s[7]=0;s[7]<4;s[7]++){
	for(s[8]=0;s[8]<4;s[8]++){

		check=true;

		b[0]=(a[0]+3*(s[0]+s[1]+s[3]))%12;
		b[1]=(a[1]+3*(s[0]+s[1]+s[2]+s[4]))%12;
		b[2]=(a[2]+3*(s[1]+s[2]+s[5]))%12;
		b[3]=(a[3]+3*(s[0]+s[3]+s[4]+s[6]))%12;
		b[4]=(a[4]+3*(s[0]+s[2]+s[4]+s[6]+s[8]))%12;
		b[5]=(a[5]+3*(s[2]+s[4]+s[5]+s[8]))%12;
		b[6]=(a[6]+3*(s[3]+s[6]+s[7]))%12;
		b[7]=(a[7]+3*(s[4]+s[6]+s[7]+s[8]))%12;
		b[8]=(a[8]+3*(s[5]+s[7]+s[8]))%12;

		for(int i=0;i<9;i++)if(b[i]!=0){
		    check=false;
		    break;
        }
		if(check){
			for(int i=0;i<9;i++){
				temp=s[i];
				while(temp>0){ans[t]=i+1;t++;temp--;}
			}
			for(int i=0;i<t-1;i++)
				fout<<ans[i]<<" ";
			fout<<ans[t-1]<<endl;
			return 0;
		}
	}}}}}}}}}
}
