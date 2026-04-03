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

int sub(int x, int y) {
    int res = x;
    for (int i = 0; i < y; i++) {
        res = pred(res);
    }
    return res;
}

// 4. Division: Returns x / y
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

int main() {
    printf("The purpose of this program is to simulate div(x,y) in LOOP modeling\n");
    printf("Here we have x = 5 and y = 2\n");

    int x = 5;
    int y = 2;

    int result = div_loop(x, y);
    int res_0 = div_loop(x,0);

    printf("Result of div(%d, %d) = %d\n", x, y, result);
    printf("Result of div(%d, 0) = %d\n", x, res_0);

    return 0;
}
