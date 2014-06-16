/*
ID: k300021
LANG: C++
TASK: sprime
*/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include<math.h>

using namespace std;


bool isprime(int a){

    int tmp = sqrt(a);
    if(a==1) return false;
    for(int i=2;i<=tmp ;i++){
            if(a%i==0)       // checks if the number is fully divisible or not
             {
               return false;
             }
    }
    return true;
}
bool check(int a,int length,int max){
    double tmp = a;
    bool result;
    int time=0;


    for(int i= length ; i >0 ;i -- ){

        if(!isprime( a/max )) return false;
        max/=10;
    }

    return true;
}


int main()
{
    int a,b;
    ofstream fout ("sprime.out");
    ifstream fin ("sprime.in");
    fin >> a;
    int max=1;

    for(int i=0;i<a-1;i++) max*=10;



    for(int i=max*2.3;i<max*2.4;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;
    }
    for(int i=max*2.9;i<max*3;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;

    }
    for(int i=max*3.1;i<max*3.2;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;
    }
    for(int i=max*3.7;i<max*3.8;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;

    }


    for(int i=max*5.9;i<max*6;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;

    }
    for(int i=max*7.1;i<max*7.2;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;

    }
    for(int i=max*7.3;i<max*7.4;i++)
    {
        if(i%2==0) continue;
        if(check(i,a,max)) fout<<i <<endl;

    }

    return 0;
}
