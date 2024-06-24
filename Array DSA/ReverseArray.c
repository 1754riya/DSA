#include<stdio.h>
int main(){
    int temp;
    int arr[]={1,2,3,4,5,6};
    int n = sizeof arr/sizeof arr[0];
    for(int i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Reversed array:");
    for(int i=0; i<n;i++){
        printf(" %d",arr[i]);

    }
    printf("\n");
}