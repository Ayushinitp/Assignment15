//1
#include <stdio.h>
int lcm(int x,int y);
 int main(){
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    c=lcm(a,b);
    printf("Lcm is %d",c);
    return 0;
 }
 int lcm(int x,int y){
    int i;
    for(i=x>y?x:y;i<=x*y;i++){
        if(i%x==0 && i%y==0){
            return i;
        }
        
    }
 }