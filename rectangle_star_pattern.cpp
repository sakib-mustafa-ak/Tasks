#include<stdio.h>
int main(){
    int r,c,i,n;
    printf("Enter the number of raws and columns: ");
    scanf("%d",&n);

    for ( r = 0; r < n; r++){
        for ( c = 0; c < n; c++){
            if (r == 0||r == (n-1)||c == 0||c == (n-1)){
                printf("* ");
            } else {
                printf("  ");
            }
            
        } printf("\n");
        
    }
    
}