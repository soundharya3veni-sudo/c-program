#include <stdio.h>
int main() {
       int r,c;
    scanf("%d,%d",&r,&c);
    int a[50][50];
    int i,j;
    for(i=0;i<r;i++)
      for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        int max=-99999;
        for(i=0;i<r-1;i++)
        int sum =a[i][j]+a[i][j+1]+[j+1];
        if(sum>max)
          max=sum;
    return 0;
}

 printf("%d",max);
 return 0;
}
