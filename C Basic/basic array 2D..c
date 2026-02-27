#include <stdio.h>
int main() {
  int arr[2][3]={{1,2,3,4,5},{6,7,8,9}}
  printf("%d",arr[0][1]);
  printf("%d",arr[1][0]);
  arr[0][1]=100;
  arr[1][0]=10;
  printf("after"\n);
  printf("%d",arr[0][1]);
  printf("%d",ar[1][0]);
    
    return 0;
}
