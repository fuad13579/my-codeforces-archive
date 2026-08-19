#include<stdio.h>


int max_val(int arr[],int n){

        int sum =0;
        int max = arr[0];

        for(int i=0;i<n;i++){
            if (arr[i]>max)
                max = arr[i];

        sum+=max;

        }

    return sum;

    }

int main(){

    int t;

    scanf("%d",&t);

    while(t--){
        int n;

        scanf("%d",&n);

        int arr[n];


        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int final1 = max_val(arr,n);

        for (int j=0;j<n;j++){
            for (int k=j+1;k<n;k++){

                int tem = arr[j];
                arr[j]=arr[k];
                arr[k]=arr[j];

                int final2 = max_val(arr,n);

                if (final2 > final1)
                    final1=final2;

                tem = arr[j];
                arr[j]=arr[k];
                arr[k]=arr[j];

            }

        }

        printf("%d\n",final1);
    }




   return 0;


}
