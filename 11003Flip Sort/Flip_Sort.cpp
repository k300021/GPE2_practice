#include<iostream>

using namespace std;

int *num;
int *tmp;
int ch;

void bubblesort(int *data, int n)
{
    for(int i = 0 ; i < n ; i++){
        for(int j= i+1 ; j < n ; j++){
            if(data[i]>data[j]) ch++;
        }
    }
}
int main(){
    int inum ;



    while( cin >> inum ){
        ch = 0;
        num = new int [inum];
        tmp = new int [inum];
        for(int i=0 ; i < inum ; i++){
            cin >> num[i];
        }

        bubblesort(num,inum);

        /*
        for(int i=0 ; i < inum ; i++){
            cout << num[i]<<endl;

        }*/
        cout <<"Minimum exchange operations : "<< ch << endl;
    }



}
