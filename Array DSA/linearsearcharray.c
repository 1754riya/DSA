#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n= sizeof arr/sizeof arr[0];
    int l=0;
    int h=n-1;
    int mid;
    int key=5;
    while(l<=h)
    { mid=(l+h)/2;
    if(key==arr[mid])
    {
        printf("element found at index:%d",mid);
        return 0;
        //element found
    }
    else if (key<arr[mid]){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
    }
     printf("Element not found\n");
    return -1; // Element not found
}