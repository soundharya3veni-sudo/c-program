#include <stdio.h>
int main() {
   int arr[5]={10,20,30,40,50};
   printf("%d",arr[0]);
   printf("%d\n",arr[2]);
   arr[0]=100;
   arr[2]=50;
   printf("after\n");
   printf("%d",arr[0]);
   printf("%d",arr[2]);
    return 0;
}
