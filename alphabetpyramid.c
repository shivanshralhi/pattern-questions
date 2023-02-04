#include<stdio.h>
int main(){
    int n;
    printf("enter any integer : ");
    scanf("%d",&n);
    int nm=1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nm;j++){
            int d = a+64;
            char ch = (char)ch;
            printf("%c",d);
            a++;
        }
        nm = nm+2;
        printf("\n");

    }
    return 0;
}