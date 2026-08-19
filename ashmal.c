#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n,i;
        scanf("%d", &n);

        char a[4001];
        char s[4001];
        char f[4001];
        char b[4001];
        s[0]='\0';
        for (i=0;i<n;i++){
            scanf("%s", a);
        
        strcpy(f,s);
        strcat(f,a);
        strcpy(b,a);
        strcat(b,s);


        if(strcmp(f,b)<0){
            strcpy(s,f);
        }
        else{
            strcpy(s,b);
        }

    }
        
        printf("%s\n", s);

    }
    return 0;
}
