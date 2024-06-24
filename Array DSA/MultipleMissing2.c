#include<stdio.h>
int main(){
    int arr[] = {1,2,5,6,8,9,3};
    int n = sizeof arr / sizeof arr[0];
    int hash[10]={0};
    int temp;
    int l=1;
    for(int i=0;n<i-1;i++)
    {
        for(int j=0;n<j-i-1;j++){
            if(arr[i]>arr[j])
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("missing:");
    for(int i=0;i<n;i++){
        while(l<arr[i]){
            printf("%d",l);
            l++;
        }
        l=arr[i]+1;
    }
}