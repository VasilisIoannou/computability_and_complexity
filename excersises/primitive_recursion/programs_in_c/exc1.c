#include <stdio.h>
#include <stdlib.h>

/* --- 4 Basic Functions --- */

int S(int x){
    return x+1;
}

int Z(int x){
    return 0;
}

int P(int x){
    if(x < 0){
        printf("There was an error!\n no negative numbers allowed!\n");
        return -1;
    }
    else if(x == 0){
        return 0;
    }
    return x-1;
}

int U(int* variables,int i){
    return variables[i-1];//i starts from 1
}

/* --- Primitive Functions --- */

int add(int x,int y){
    if(x<0 || y<0){
        printf("x and y should be positive numbers!\n");
        printf("I got x = %d and y =%d \n",x,y);
        return -1;
    }else if(y == 0){
        int* v = malloc(sizeof(int)*3);
        v[0] = x;
        v[1] = y;
        return U(v,1); // x + 0 = x
    } 
    int* v = malloc(sizeof(int)*3);
    v[0] = x;
    v[1] = y;
    v[2] = add(x,y-1); //in C I can not get as input y+1 so I return y-1
    
    // step function
    int sum = S(U(v,3));
    return sum;
}

//Note: this is actually dot minus!
int sub(int x,int y){
    if(x<0 || y<0){
        printf("x and y should be positive numbers!\n");
        printf("I got x = %d and y =%d \n",x,y);
        return -1;
    }else if(y == 0){
        int* v = malloc(sizeof(int)*3);
        v[0] = x;
        v[1] = y;
        return U(v,1); // x - 0 = x
    } 
    int* v = malloc(sizeof(int)*3);
    v[0] = x;
    v[1] = y;
    v[2] = sub(x,y-1); //in C I can not get as input y+1 so I return y-1
    
    // step function
    int sum = P(U(v,3));
    return sum;
}

int sg(int x){
    if(x < 0){
        printf("x should be a positive number!\n");
        printf("I got x = %d\n",x);
        return -1;
    } else if(x == 0){
        return S(Z(x));
    }
    return Z(x);
}

int mult(int x,int y){
    if(x<0 || y<0){
        printf("x and y should be positive numbers!\n");
        printf("I got x = %d and y =%d \n",x,y);
        return -1;
    }else if(y == 0){
        return Z(x); // x * 0 = 0
    } 

    int* v = malloc(sizeof(int)*3);
    v[0] = x;
    v[1] = y;
    v[2] = mult(x,y-1); //in C I can not get as input y+1 so I return y-1

    // step function
    int prod = add(U(v,3),U(v,1));
    return prod;
}

int bounded_sum(int i, int x, int y) {
    if (i == 0) return Z(x);

    // The current term: sg((i * y) -. x)
    int current_term = sg(sub(mult(i, y), x));

    return add(current_term, bounded_sum(P(i), x, y));
}

int div_pr(int x, int y) {
    if (y == 0) return Z(x); // Convention: div by zero is 0
    
    return bounded_sum(x, x, y);
}

int main(){
    printf("The purpose of this program is to simulate add,sub, mult and div using only\n");
    printf("primitive recursive functions and the four basics function:\n");
    printf("S, P, Z, U\n");

    printf("Here we have x = 4 and y = 2\n");
 
    int x = 4;
    int y = 2;

    int add_res  = add(x,y);
    int sub_res  = sub(x,y);
    int mult_res = mult(x,y);
    int div_res  = div_pr(x,y);

    printf("add(%d,%d) = %d\n",x,y,add_res);
    printf("sub(%d,%d) = %d\n",x,y,sub_res);
    printf("mult(%d,%d) = %d\n",x,y,mult_res);
    printf("div_pr(%d,%d) = %d\n",x,y,div_res);




}
