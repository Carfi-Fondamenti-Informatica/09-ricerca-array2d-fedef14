#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char a[10][20];
    char d1[10];
    int c = 0;
  
  for(int i=0;i<10;i++){
        cin >> a[i];
    }
  cin >> d1;
 
  if(nome(a,d1,c)<10){
        cout << c << endl;
    } else{
        cout << "non presente" << endl;
    }
  return 0;
}
