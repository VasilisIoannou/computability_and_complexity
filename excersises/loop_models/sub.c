#include <stdio.h>
//simulates x - 1

//simulates x - y by calling pred, y times
int sub(int x, int y) {
    int result;
    int prev = x;
    for(int i=1;i<=y;i++){
        int pred = 0;
        for (int i = 2; i <= prev; i++) {
            pred = pred + 1;
        }
        prev = pred;
    }
    result = prev;
    return result;
}
int main(){
    printf("The purpose of this program is to simulate sub(x,y) in LOOP modeling\n");
    printf("Here we have x = 6 and y = 2\n");

    int x = 6;
    int y = 2;
    
    int res = sub(x,y);
        
    printf("result = %d\n",res);
}

