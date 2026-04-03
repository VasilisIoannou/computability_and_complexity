#include <stdio.h>

int pred(int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = i; // res stays one step behind i
    }
    return res;
}

int iszero(int x) {
    int res = 1;
    for (int i = 0; i < x; i++) {
        res = 0; // If loop runs even once, it's not zero
    }
    return res;
}
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

int div_loop(int x, int y) {
    int quotient = 0;
    int remainder = x;
    int terminate = 0;

    //Check if y = 0
    for(int j=y;j<1;j++){
        terminate = 1;
        quotient = 0;
    }

    for (int k = terminate; k<1;k++){
        for (int i = 0; i < x; i++) {
            int check = sub(y, remainder);
            int can_subtract = iszero(check);

            for (int j = 0; j < can_subtract; j++) {
                quotient = quotient + 1;
                remainder = sub(remainder, y);
            }
        }
    }
    return quotient;
}
int main(){
    printf("The purpose of this program is to simulate comb(x,y) in LOOP modeling\n");
    printf("Here we have x = 4 and y = 2 \n");

    int x = 4;
    int y = 2;
    
    int num = fact(x);

    int denum = fact(y);
    int temp = sub(x,y);
    temp = fact(temp);
    denum = mult(denum,temp);

    int comb = div_loop(num,denum);

    printf("result = %d\n",comb);
}
