#include<stdio.h>

int main(){
    int t;

    scanf("%d",&t);

    while(t--){
        int n;

        scanf("%d",&n);

        for(int i=1; i<=n; i++){
            int x;
            x = i * i;
            printf("%d ",x);
        }

        printf("\n");

    }


return 0;



}
