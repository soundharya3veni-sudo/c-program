  #include <stdio.h>
int main() {
   int n,i;
   scanf("%d",&n);
   int a[60];
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   int m;
   int sec;
   for( i=0;i<n;i++){
    if(a[i]>m){
      sec=m;
      m=a[i];
    }
   }
    else if(a[n]>sec && sec!=m){
        sec=a[i];
    }     


   printf("%d",sec);
    
    return 0;
}
    
