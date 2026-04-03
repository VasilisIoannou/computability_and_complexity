#include <stdio.h>

int if_then_else(int x){
    int do_then = 1;
    int do_else = 0;
    int res = 0;
    for(int i = x; i<1; i++){
        do_then = 0;
        do_else = 1;
    }

    for(int i = do_then; i<1 ;i++){
        res = 1;
    }

    for(int i = do_else; i<1 ;i++){
        res = 2;
    }

    return res;
}

int main(){
    printf("The purpose of this program is to simulate if_then_else(x) in LOOP modeling\n");
    printf("If x = 0 then h1(x) = 1 else h2(x) = 2\n");
    printf("Here we have x = 0 and y = 1\n");

    int x = 0;
    int y = 1;

    int res_x = if_then_else(x);
    int res_y = if_then_else(y);

    printf("result for x = %d\n",res_x);
    printf("result for y = %d\n",res_y);
}

