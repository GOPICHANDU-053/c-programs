// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);
    int res=((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'));
    printf("%c is vowel i.e is:%d",ch,res);
    return 0;
}