#include <stdio.h>
int sum_array(int*arr,int size) {
  int sum=0;
  for(int i=0;i<size;i++){
    sum+=*(arr + 1);

  }  
  return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("sum = %d\n",sum_array(arr,n));
    return 0;
}
