
#include <stdio.h>

int main(){
     
    int arr[50],n,i,j,sum=0;
    printf("Enter the number of array:");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        sum=sum+arr[j];
    }
    
    printf("sum is %d",sum);

    return 0;
}
