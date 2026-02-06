#include <stdio.h>

int main(){
    int x,y,z; // x:크림빵(500원), y:새우깡(700원), z:콜라(400원)
    for(x = 1; x < 7; x++){
        for(y = 1; y < 5; y++){
            for(z = 1; z < 9; z++){
                if(500*x + 700*y + 400*z == 3500) printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n",x,y,z);
            }       
        }
    }
}