#include<stdio.h>
int main(){
    int arr[]={23,-40,56,87};
    int n = sizeof arr/ sizeof arr[0];
    int temp;
            // j Represents the current index in the array being compared.
            // decreases by 1 because the last i elements are already sorted and do not need to be compared again.
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
    printf("Sorted :");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}