#include <stdio.h>

int mult(int x, int y){
    int res = 0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            res = res + 1;
        }
    }
    return res;
}

int main(){
    printf("The purpose of this program is to simulate pow(x,y) in LOOP modeling\n");
    printf("Here we have x = 5 and y = 3\n");

    int x = 5;
    int y = 3;

    int i;
    int prod = x;
    for(i=1;i<y;i++){
        prod = mult(prod,x);
    }

    printf("result = %d\n",prod);
}
