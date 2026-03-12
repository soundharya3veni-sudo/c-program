#include <stdio.h>
int reverse_array(int *arr,int size) {
    int *start=arr;
    int *end=arr +size-1;
    while(start<end){
        int temp =*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
 void print_array(int*arr,int size)
 for(int i=0;i<size;i++){
     printf("%d",*(arr +i));

 }
 printf("\n");
 int main(){
    int n;
    printf("enter numbers of elements:");
    scanf("%d",&n);
    int arr[n]
 }
   
    return 0;
