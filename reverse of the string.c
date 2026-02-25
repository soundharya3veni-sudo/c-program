 #include <stdio.h>
int main() {
   int n,
   scanf("%d",&n);
   int a[n];
   //for(int price=0;price<n;price++){
    //scanf("%d",&a[price]);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
   
   int tar;
   scanf("%d",&tar);
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j--){
        if(tar==a[i]>a[j]){
            printf("%d %d",a[i],a[j]);
            return 0;
        } 
    }
   }printf("revrese of the string");
   
    
    return 0;
} 
     
