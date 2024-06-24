#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof arr/ sizeof arr[0];
    int total=0;
    int Avg;
    for(int i=0; i<n;i++){
        total=total+arr[i];
        Avg=total/n;
    }
    printf("%d\n",total);
    printf("%d\n",Avg);
}