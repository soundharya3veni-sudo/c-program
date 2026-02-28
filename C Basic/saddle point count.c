#include <stdio.h>
int main() {
    int r,c;
    scanf("%d,%d",&r,&c);
    int a[50][50];
    int i,j,k,count=0;
    for(i=0;i<r;i++)
      for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        for(i=0;i<r;i++)
        for(j=0;j<r;j++){
            int rowmin =1,colmax=1;
            for(k=0;k<c;k++)
             if(a[i][j]>a[i][k])
             rowmin=0;

        }
        for(k=0;k<r;k++)
        if(a[i][j]<a[k][j])
      } colmax =0;
      if(rowin&&colmax)
      count ++;
}
{
    
printf("%d",count);
    
    return 0;
}
