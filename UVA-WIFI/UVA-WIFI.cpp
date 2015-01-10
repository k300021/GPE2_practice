#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> house;

int checkpoint(int mid){
    double distance = mid + house[0];
    int wifinum =1;
    for (size_t i = 0; i < house.size(); ++i){
        if(distance < house[i]){
             wifinum++;
             distance = house[i]+mid;
        }
    }

    return wifinum;
}


int main(){
    int time;

    cin >> time;
    cout.precision(1);

    while(time--){
        int nPoint,nHouse;

        cin  >> nPoint >> nHouse;
        house.clear();

        for (int i = 0, d; i < nHouse; ++i) cin >> d, house.push_back(d);

        sort(house.begin(), house.end());

        double min = 0,mid,max = house[house.size() - 1];


        do{
            mid = (min+max)/2;
            if(checkpoint(mid)>nPoint){
                min = mid;
            }else{
                max = mid;
            }

        }while(max-min>0.1);

        cout << fixed << (round(min * 10) / 20.0) << endl;

    }

}
