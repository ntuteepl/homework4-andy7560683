#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(1){
        if(1 <= n & n <= 10){
            break;
        }
    }


    int b = n;
    int g = n;
    int a[b][g];
    int m;
    for(int i = 0; i < n; i++){
        for(int s = 0; s < n; s++){
            scanf("%d", &m);
            a[i][s] = m;
        }
    }

for(int k = 0; k < n; k++){

    int max = 0;
    int max_X, max_Y;
    int x, y;

    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] > max){
                   max = a[i][j];
                   max_X = i;
                   max_Y = j;
                }
            }
    }

    for(int i = 0; i < n; i++){
        a[max_X][i] = 0;
        a[i][max_Y] = 0;
    }

    printf("boy %d pair with girl %d\n", max_X+1, max_Y+1);
}
return 0;
}



//boy x pair with girl y


