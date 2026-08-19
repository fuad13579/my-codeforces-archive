#include<stdio.h>

long long max_layer(long long a,long long b,int is_white){
    long long size=1;
        int layer=0;

        while (1){
            if (is_white){
                if (a<size)break;
                a-=size;
            }
            else {
                if (b<size)break;
                b-=size;    
            }
            layer++;
            size*=2;
            is_white = !is_white;

        }
        return layer;
    }




int main(){
    int t;

    scanf("%d",&t);

    while(t--){
        long long a,b;

        scanf("%lld %lld",&a,&b);

        int m_w= max_layer(a,b,1);
        int m_b= max_layer(a,b,0);

        if(m_w>m_b)
            printf("%d\n",m_w);
        else
            printf("%d\n",m_b);


        }

    return 0;

    }
    
