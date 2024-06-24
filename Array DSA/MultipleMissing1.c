#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,6,7,10};
    int n = sizeof arr / sizeof arr[0];
    int l=1;
    printf("Missing:");
    for(int i=0;i<n;i++){
            while(l<arr[i]){
                printf("%d\n",l);
                l++;   
        }
        l=1+arr[i];
    }
    printf("Missing:");
    for(int i=0; i<n;i++){
        printf("%d",arr[i]);
    }

}