#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b;
    for(a = 0;a<n; a++){
        scanf("%d", &b);
    int k = 1;
    int i;
    for(i = 2; i < b && i%b!=0; i++){
        if((b % i) == 0){
           k = 0;
        }
    }
    if(k == 1)
        printf("YES\n");
    else
        printf("NO\n");

}
}

