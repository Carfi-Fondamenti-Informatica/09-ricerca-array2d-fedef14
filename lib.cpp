#include "lib.h"

bool nome(char d2[10][20], char d1[10], int &c){
    for(int i=0;i<20;i++){
        if(d2[i] == d1){
            return true;
        } else{
            for(int j=0;j<10;j++){
                if(d2[j][i] == d1[i]){
            return c;
                } else{
                    c++;
                }

            }
            if(c>=10){
                return false;
    }
    }
}
}


