#include<stdio.h>
int main(){

printf("Enter your marks out of 100");

int a;
char g;

printf("\nEnter your score: ");
scanf("%d",&a);


g = (a>= 90) ? 'A' :
    (a>= 75) ? 'B' :
    (a>= 60) ? 'C' :
    (a>= 45) ? 'D' :
    'F';

    printf("Your Grade is %c",g);

    switch(g){
        case 'A':
        printf("\nExcellent Work !");
        break;
        case 'B':
        printf("\nWell done !");
        break;
        case 'C':
        printf("\nGood job !");
        break;
        case 'D':
        printf("\nYou passed but you could do better");
        break;
        case 'F':
        printf("\nSorry,you fail");
        break;
    }

    if (g=='A' || g=='B' || g=='C' || g=='D')
    {
        printf("\nCongratulations! You are eligible for the next level !");
    }
    else 
    {
        printf("\nPlease try again next time");
    }

return 0;

} 