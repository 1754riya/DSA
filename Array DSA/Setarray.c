#include<stdio.h>
int set(int arr[], int n,int index, int value)
    {
        if(index>=0 && index<n){
            arr[index]=value;
            return 0;}
            else{
                return -1;
                //return -1 to indicate an invalid index
            }
        }

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof arr/sizeof arr[0];
    int index=4;
    int value=3;
    int result = set(arr,n,index,value);
    if( result!= -1)
    {
        printf("element of this index is%d is changed with this index%d\n",index,value);
    }
    else{
        printf("invalid");
    }
    printf("updated arr:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("%d");

}