#include<stdio.h>
struct array{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    int i;
    printf("n\elements");
    for(i=0;i<arr.length;i++);
    printf("%d",arr.A[i]);
}
void insert(struct array*arr,int index, int x){
    int i;
    if(index>=0 && index<=arr->length)
    {
    for(i=arr->length;i>index;i--);
    arr->A[i]=arr->A[i-1];
    arr->A[index]=x;
    arr->length++;
    }
}
void append(struct array*arr,int x){
    if(arr->length<arr->size);
    arr->A[arr->length++]=x;
}
int main(){
    struct array arr={{2,3,4,5,6},10,5};
    insert(&arr,4,10);
    append(&arr,10);
    Display(arr);
 }