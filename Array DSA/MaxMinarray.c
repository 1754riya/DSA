#include<stdio.h>
void Maxmin(int arr[],int n){
    int max=arr[0];
    int min= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The max value is:%d",max);
    printf("The min value is: %d",min);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof arr/ sizeof arr[0];
    Maxmin(arr,n);
    return 0;

}