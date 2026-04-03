#include <stdio.h>

int ifzero(int x){
    int res = 0;
    for(int i = x; i<1; i++){
        res = 1;
    }
    return res;
}

int main(){
    printf("The purpose of this program is to simulate ifzero(x) in LOOP modeling\n");
    printf("Here we have x = 0 and y = 1\n");

    int x = 0;
    int y = 1;

    int res_x = ifzero(x);
    int res_y = ifzero(y);

    printf("result for x = %d\n",res_x);
    printf("result for y = %d\n",res_y);
}
