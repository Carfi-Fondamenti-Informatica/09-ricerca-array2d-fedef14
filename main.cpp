#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char a[10][20];
    char d1[20];
    int i = 0;
  
  for(int i=0;i<10;i++){
  for(int c=0;c<20;c++){
  d1[c] = ' ';
    a[i][c] = ' ';
  }
  }
  
  for(int c=0;c<10;c++){
        cin >> a[c];
    }
  cin >> d1;
 
  if(nome(a,d1,i)==1){
        cout << i << endl;
    } else{
        cout << "non presente" << endl;
    }
  return 0;
}
