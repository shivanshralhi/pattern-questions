#include<stdio.h>
int main(){
    int n;
    printf("enter any integer : ");
    scanf("%d",&n);
    int a = 2*n+1;
    int c = a/2+1;
    int b = a/2;
    for(int i=1;i<=c;i++){
        int d = i +64;
        char ch = (char)d;
        printf("%c",d);
    }
    for(int i=b;i>=1;i--){
        int d = i+64;
        char ch = (char)d;
        printf("%c",d);
    }
    printf("\n");
    int nsp=1;
    int nst = n;
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=nst;j++){
            int d = j+64;
            char ch = (char)d;
            printf("%c",d);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=b;j>=1;j--){
            int f = j+64;
            char ch = (char)f;
            printf("%c",f);
        }
        nst--;
        nsp+=2;
        b--;
        printf("\n");
    }


    return 0;
}    