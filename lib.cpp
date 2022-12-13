#include "lib.h"

int nome(char a[10][20], char d1[10], int &c){
    for(int i=0;i<20;i++){
            for(int j=0;j<10;j++){
                if(a[j][i] == d1[i]){
            return c;
                } else{
                    c++;
                }
    }
    }
    return false;
}


