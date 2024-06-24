#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof arr[0];
    int pos=3;
//checking if condition is valid 
    if(pos<0 || pos>=n){
        printf("invalid position");
        return 1;
        //if it is outside the condition then
    }

    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    // don't forget to n-- bcoz size is reduced

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        // arranging array in sequence again 
    }
    printf("%d\n");
    // printing correct array
}