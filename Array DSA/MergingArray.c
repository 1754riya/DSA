#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5};
    int n1= sizeof arr1/ sizeof arr1[0];
    int arr2[]={6,7,8,9,10};
    int n2= sizeof arr2/ sizeof arr2[0];
    int mergesize= n1+n2;
    int merged[mergesize];
    for(int i=0; i<n1;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        merged[i+n1]=arr2[i];
    }
    printf("Merged :");
    for(int i=0;i<mergesize;i++){
        printf("%d",merged[i]);
    } 
}