#include<iostream>

using namespace std;


int bubblesort(int *data, int n)
{
    int i, j, temp, time =0;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                time++;
            }
        }
    }

    return time;
}


int main(){
    int around;

    cin >> around;
    for(int i=0 ; i < around ; i++){
        int num,time;
        int *train;

        cin >> num;

        train = new int [num];

        for(int j=0 ;j<num ; j++ ){
            cin >> train[j];

        }
        time = bubblesort(train,num);
        cout<<"Optimal train swapping takes "<< time <<" swaps."<<endl;
        delete train;
    }

}
