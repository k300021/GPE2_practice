#include<bits/stdc++.h>
using namespace std;

int main(){
  int num;
  int r, s[505];
  int house,d;


  while(cin>>num){
    for(int i = 0 ; i < num ; i++){
      cin>>r;

      for( int j = 0 ; j < r ; j++ )
       cin>>s[j];

      sort(s, s+r);

      d = 0;
      house = s[r/2];

      for( int j = 0 ; j < r ; j++ )
        d += abs( house-s[j] );

      cout<<d<<endl;
    }
  }
  return 0;
}
