#include <stdio.h>

int main(){
    printf("The purpose of this program is to simulate mult(x,y) in LOOP modeling\n");
    printf("Here we have x = 5 and y = 3\n");

    int x = 5;
    int y = 3;

    int i,j;
    int res = 0;
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            res = res + 1;
        }
    }

    printf("result = %d\n",res);
}
