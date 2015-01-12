#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    int size;

    while(cin>>size&&size){
        int cost =0;
        priority_queue < int, vector<int>, greater <int> > myqueue;

        while(size--){
            int tmp;
            cin >>tmp;
            myqueue.push(tmp);
        }

        if(myqueue.size() ==1) cout << myqueue.top() <<endl;
        else{
            while(myqueue.size()!=1){
                int tmp =0;
                tmp+= myqueue.top();
                myqueue.pop();
                tmp+= myqueue.top();
                myqueue.pop();
                cost += tmp;
                myqueue.push(tmp);
            }

            cout << cost <<endl;

        }
    }

}
