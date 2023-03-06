#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    system("cls");
    int number , guess , nguess;
    nguess = 1;
    srand(time(0));
    number = rand()%100+1;
    do{
    printf("Guess the Number between 1-100\n");
    scanf("%d",&guess);
    if(guess > number)
    printf("Lower Number please !!\n");
    else if(guess < number)
    printf("Higher Number please !!\n");
    else
    printf("Woohh!! You guess the number correct in %d attemps\n",nguess);
    nguess++;
    }
    while(number!=guess);
    getch();
    return 0;
}