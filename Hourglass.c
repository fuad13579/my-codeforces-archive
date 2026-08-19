#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long s,k,m;

        scanf("%lld %lld %lld",&s,&k,&m);

        long long n = m/k;
        long long rem = m%k;
        long long s_last;

        if (n%2==0){
            s_last=s;
        }
        else if (n%2==1){
            if(s<k)
                s_last=s;
            else
                s_last=k;
        }
        long long last_min=s_last-rem;
        if(last_min<0)
            last_min=0;

        printf("%lld",last_min);

    }





}
