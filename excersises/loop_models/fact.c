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

int fact(int x){
    int fact_res = x;
    int temp = sub(x,1);
    for(int i=2;i<x;i++){
        fact_res = mult(fact_res,temp);
        temp = sub(temp,1);
    }
    return fact_res;
}

int main(){
    printf("The purpose of this program is to simulate factorial(x) in LOOP modeling\n");
    printf("Here we have x = 4 \n");

    int x = 4;
    
    int fact_res = fact(x);

    printf("result = %d\n",fact_res);
}
