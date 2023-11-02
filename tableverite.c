#include <stdio.h>
#include <stdlib.h>

int main(){

    int t[8] = {0, 0,0,0,1,1,1,1}, t1[8]={0,0,1,1,0,0,1,1}, t2[8]={0,1,0,1,0,1,0,1};
    printf("b1      b2      b3       |       (b1 or b2) and not b3 \n");

    for (int i = 0; i < 8; i ++)

    {
        printf("%d        %d       %d       |       %d      \n", t[i], t1[i], t2[i], (t[i] || t1[i]) && (!t2[i]));
    }

}
