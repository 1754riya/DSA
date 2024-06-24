#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,7,8};
    int n = sizeof arr/ sizeof arr[0];
    int sum=0;
    int total;
    int missing;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
     total=(n+2)*(n+1)/2;
        missing=total-sum;
        printf("%d",missing);
}