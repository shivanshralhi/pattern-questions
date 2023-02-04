#include<stdio.h>
int main(){
    int n;
    printf("enter any integer : ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int a=1;
    for(int i=1;i<=2*n+1;i++){
        int d=a+64;
        char ch = (char)d;
        printf("%c",d);
        a++;
    }
    for(int i=1;i<=n;i++){
        
    }
    printf("\n");
    return 0;
}