#include <stdio.h>
int add(int x, int y){
    int res = x;
    for(int i=1;i<=y;i++){
        res = res + 1;
    }
    return res;
}
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

int cantor(int m,int n){
    // C(n,m) = (n+m)*(n+m+1)/2 + n
    int sum = add(m,n);
    int triangle = div_loop(mult(sum, add(sum, 1)), 2);
    
    return add(triangle, n);
}

int sqrt_loop(int x){

    int result = 0;
    int current_i = 1;

    for(int i=1; i<=x ;i++){
        int square = mult(current_i, current_i);
        
        // Check if square <= x
        // Logic: 1 - (square - x)
        int is_le = sub(1, sub(square, x));

        // If it was <= x, is_le is 1, so we add it to the result
        result = add(result, is_le);
        
        // Increment our counter for the next iteration
        current_i = add(current_i, 1);
    }

    return result;
}

int find_w(int k) {
    // Formula: w = floor( (sqrt(8k + 1) - 1) / 2 )
    int inside_sqrt = add(mult(8, k), 1);
    int root = sqrt_loop(inside_sqrt);
    return div_loop(sub(root, 1), 2);
}

int D2(int k) {
    int w = find_w(k);
    // t is the triangular number of the diagonal: (w*(w+1))/2
    int t = div_loop(mult(w, add(w, 1)), 2);
    return sub(k, t); // This is 'n'
}

int D1(int k) {
    int w = find_w(k);
    int n = D2(k);
    return sub(w, n); // Since w = m + n, then m = w - n
}

int main(){
    printf("The purpose of this program is to simulate the Cantor's Pairing Function in LOOP modeling\n");
    printf("Here we have x = 2 and y = 1 \n");

    int x = 2;
    int y = 1;
    
    int cant = cantor(x,y);
    int n = D1(cant);
    int m = D2(cant);

    printf("cantor's function result = %d\n",cant);
    printf("decoding: D1 = %d ,D2 = %d\n",n,m);
}
