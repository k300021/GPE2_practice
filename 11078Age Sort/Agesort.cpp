#include<iostream>
#include <stdlib.h>

using namespace std;

int *num;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}



int main(){
    int inum ;



    while( cin >> inum && inum !=0 ){

        num = new int [inum];
        for(int i=0 ; i < inum ; i++){
            cin >> num[i];
        }

        qsort (num, inum, sizeof(int), compare);
        int i;
        for( i=0 ; i < inum-1 ; i++){
            cout << num[i]<<" ";

        }
        cout<< num[i]<<endl;
        delete num;
    }



}
