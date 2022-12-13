#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char d2[10][20];
    char d1[10];
    int c = 0;
  
  for(int i=0;i<10;i++){
        cin >> d2[i];
    }
  cin >> d1;
 
  if(nome(d2,d1,c)){
        cout << c << endl;
    } else{
        cout << "non presente" << endl;
    }
  return 0;
}
