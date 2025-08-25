#include<stdio.h>
int main(){ 
    int x;
    int a=0,e=0,i=0,o=0,u=0;
    char str[100];
    printf("Enter a word:");
    scanf("%s",str);
    for(x=0;str[x]!='\0';x++){
        switch(str[x]){
        case'a':case'A':
            a=a+1;
            break;
        case'e':case'E':
            e=e+1;
            break;
        case'i':case'I':
            i=i+1;
            break;
        case'o':case'O':
            o=o+1;
            break;
        case'u':case'U':
            u=u+1;
            break;
        }
    }
    printf("Count of A is:%d\n",a);
    printf("Count of E is:%d\n",e);
    printf("Count of I is:%d\n",i);
    printf("Count of O is:%d\n",o);
    printf("Count of U is:%d\n",u);
}
