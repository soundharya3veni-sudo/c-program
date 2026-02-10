#include <stdio.h>
int main() {
    int type,units;
    float bill=0;
    scanf("%d",&type);
    scanf("%d",&units);
    switch(type){
        case 1:
          bill = units * 2;
          break;
        case 2:
          bill = units * 5;
          break; 
    }
    
    return 0;
}
