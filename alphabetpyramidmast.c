#include<stdio.h>
int main(){
    int n;
    printf("enter any integer :");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        int c=1;
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){
            int d=c+64;
            char ch=(char)d;
            printf("%c",d);
        }
        for(int k=1;k<=i-1;k++){
            int f = a+64;
            char m = (char)f;
            printf("%c",f);
            f--;
        }
        printf("\n");
    }
    return 0;
}