#include <stdio.h>


//Variable Input
int x; //Row
int y; //Column
int m,n,t,s;


//Pattern
int pattern(int x, int y){
    for(m=0;m<x;m++){
        
        if(m % 2 == 0){
            for(n=0;n<y;n++){
            
            if(n % 2 == 0 ){
                printf("*");
            }else{
                printf(".");
            }
            
            }
            
        }else if(m % 2 == 1){
            for(n=0;n<y;n++){
            
            if(n % 2 == 0 ){
                printf(".");
            }else{
                printf("*");
            }
            
            }
        }
  
        printf("\n");
    }
}

int main()
{
scanf("%d", &t); //testcase
for(s=0;s<t;s++){
    scanf("%d %d",&m,&n);
    pattern(m,n);
    printf("\n");
}
    return 0;
}