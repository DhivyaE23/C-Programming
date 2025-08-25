#include<stdio.h>
int main(){
    int n,i,num;
    int pos=0,neg=0,zero=0;
    printf("Enter the number of values:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter number %d:",i);
        scanf("%d",&num);
        if(num>0){
            pos=pos+1;
        }
        else if(num<0){
            neg=neg+1;
        }
        else{
            zero=zero+1;
        }
    }
    printf("Total positive numbers:%d \n",pos);
    printf("Total negative numbers:%d \n",neg);
    printf("Total zeros:%d \n",zero);
}
