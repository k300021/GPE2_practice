#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    int m,n,t;
    while( scanf( "%d%d%d", &m, &n, &t ) != EOF )
    {
        if(m>n){
            int tmp =m;
            m = n;
            n = tmp;
        }

        if(m > t) cout<<"0 "<<t<<endl;
        else{
            int num = 0;
            while(t - num > 0){

                int k =0;

                while(t/m -k >=0){
                    if( (t - (t/m -k)*m ) %n ==0) {

                        if(num ==0){
                            cout <<(t/m -k) +(t - (t/m -k)*m)/n <<endl;
                        }else{
                            cout <<(t/m -k) +(t - (t/m -k)*m)/n <<" "<<num<<endl;
                        }
                        break;
                    }
                    k++;
                }

                if(t/m -k >=0){
                    break;
                }else{
                    num++;
                    t--;
                }

            }


        }
    }
    return 0;
}
