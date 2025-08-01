#include <stdio.h>

int main (){
    int mark_1 , mark_2 , mark_3, mark_4 , mark_5  ;

    printf("enter marks of math :");
    scanf("%d",&mark_1);
    printf("enter marks of Physics :");
    scanf("%d",&mark_2);
    printf("enter marks of Chemistry :");
    scanf("%d",&mark_3);
    printf("enter marks of English :");
    scanf("%d",&mark_4);
    printf("enter marks of Hindi :");
    scanf("%d",&mark_5);

   float  percentage = ((mark_1+mark_2 + mark_3 +mark_4 + mark_5) / 5 );
    printf("percentage :%.2f%%\n",percentage);
    printf("---------------------\n");
    if (percentage>=80)
    {
        printf("Grade A");
        
    }
    else if(percentage<=79 && percentage>=60 ){
        printf("Grade B");
        
    }
    else if(percentage<59 && percentage>=40){
        printf("Grade C");
        
    }
    else if(percentage<39 && percentage>=28){
        printf("Grade D");
        
    }
    else if (percentage<=27){
        printf(" student is fail.");
    }
    
    printf("\n");
    printf("---------------------\n");
 
    return 0;
}