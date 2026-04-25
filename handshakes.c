// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int n;
    printf("enter no:of people");
    scanf("%d",&n);
    int sum=0;
    for(int i=(n-1);i>=1;i--)
    {
        
        sum=sum+i;
    }
    printf("total number of handshakes are:%d\n",sum);
    return 0;
}