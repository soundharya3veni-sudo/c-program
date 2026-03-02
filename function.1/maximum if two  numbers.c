#include <stdio.h>
int main() {
    int num(int a, int b){
        if(a>b){
            //printf("%d",a);
            return a;

        }
        
    else{
        //printf("%d",b);
        return b;
    }
    }
    int main()
{
    int a,b;
    scanf("%d",&a,&b);
    int x=num(a,b);
    printf("%d",x);

}
    return 0;
}
