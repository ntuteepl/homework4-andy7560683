#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    int a[25] = {0};
    for (int i = s1; i < d1; i++) {
        a[i]++;
    }
    for (int i = s2; i < d2; i++) {
        a[i]++;
    }
    for (int i = s3; i < d3; i++) {
        a[i]++;
    }
    int ans = 0;
    for (int i = 0; i < 25; i++) {
        if (a[i] > ans) {
            ans = a[i];
        }
    }
    printf("%d\n", ans);

    int c[3][2]={{s1,d1},{s2,d2},{s3,d3}};
    int d[3][2];
    
for(int k = 0; k < 3; k++){

    int min = 0;

    for(int i = 0; i < 3; i++){
        if(c[i][0] < min && c[i][0] != 0){
            min = c[i][0];
            d[i][0] = min;
        }
    }
    for(int i = 0; i < 3; i++){
        if(min == c[i][0]){
            c[i][0] = 0;
        }
    }
    min = 0;
    for(int j = 0; j < 3; j++){
        if(c[j][1] < min && c[j][1] != 0){
            min = c[j][1];
            d[j][1] = min;
        }
    }
    for(int i = 0; i < 3; i++){
        if(min == c[i][1]){
            c[i][1] = 0;
        }
    }
}
    if(ans == 1){
      printf("Driver 1's schedule is %d %d %d %d %d %d\n", d[0][0], d[0][1], d[1][0], d[1][1], d[2][0], d[2][1]);
    }
    else if(ans == 2 && d[0][1] <= d[1][0] && d[1][1] > d[2][0]){
      printf("Driver 1's schedule is %d %d %d %d\n", d[0][0], d[0][1], d[1][0], d[1][1]);
      printf("Driver 2's schedule is %d %d\n", d[2][0], d[2][1]);
    }
    else if(ans == 2 && d[1][1] <= d[2][0] && d[0][1] > d[1][0]){
      printf("Driver 1's schedule is %d %d\n", d[0][0], d[0][1]);
      printf("Driver 2's schedule is %d %d %d %d\n", d[1][0], d[1][1], d[2][0], d[2][1]);
    }
    else if(ans == 3){
      printf("Driver 1's schedule is %d %d\n",d[0][0], d[0][1]);
      printf("Driver 2's schedule is %d %d\n",d[1][0], d[1][1]);
      printf("Driver 3's schedule is %d %d\n",d[2][0], d[2][1]);
    }
    return 0;
}
//Driver 1's schedule is
