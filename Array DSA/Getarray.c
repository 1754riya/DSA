#include<stdio.h>
    int get( int arr[], int n, int index){
        if(index>=0 && index<n){
            return arr[index];}
        else{
                return -1;
            }
        }
    
    int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n= sizeof arr/sizeof arr[0];
    int index=3;
    int result = get(arr, n, index);
     if (result != -1) {
        printf("Element at index %d is %d\n", index, result);
    } else {
        printf("Invalid index\n");
    }
    }