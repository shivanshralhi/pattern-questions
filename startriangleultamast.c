#include<stdio.h>
int main(){
    int n;
    printf("enter any integer : ");
    scanf("%d",&n);
    int nst=n;
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        
        nst--;
        nsp++;
        printf("\n");
    }
    return 0;
}