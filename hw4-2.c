#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d", &m);
    int i;
    int j;
    int k;
    int S[6][3]={{123,456,9000},{456,789,5000},{789,888,6000},{336,558,10000},{775,666,12000},{566,221,7000}};
    for(i = 0;i<m; i++){
        scanf("%d %d", &j, &k);
        int z[2]={j,k};
        if(S[i][0]==z[0] && S[i][1]==z[1]){
            printf("%d\n", S[i][2]);
        }else{
        printf("error\n");
    }

    }



}

