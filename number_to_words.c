#include <stdio.h>
int main() {
    int num,digit,reversed=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0){
        printf("zero\n");
    }
    if(num< 0){
        printf("minus");
        num=-num;
    }
    while(num>0){
        reversed=reversed*10+num%10;
        num=num/10;
    }
    printf("Output in words:");
    while(reversed>0){
        digit=reversed%10;
        reversed=reversed/10;
        if(digit==0)
            printf("zero ");
        else if(digit==1) 
            printf("one ");
        else if(digit==2)
            printf("two ");
        else if(digit==3) 
            printf("three ");
        else if(digit==4) 
            printf("four ");
        else if(digit==5) 
            printf("five ");
        else if(digit==6) 
            printf("six ");
        else if(digit==7) 
            printf("seven ");
        else if(digit==8) 
            printf("eight ");
        else if(digit==9) 
            printf("nine ");
    }
}
