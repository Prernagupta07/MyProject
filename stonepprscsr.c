#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int stone_ppr_scsr(char you,char comp){
    //returns 1 if you win , -1 if you loose and 0 if draw
    //conditions for draw :- ss , cc , pp
    if(you==comp){
        return 0;
    }
    //Non-draw conditions :- sc , cs , sp , ps , cp ,pc
    if (you == 's' && comp == 'c'){
        return 1;
    }
    if (you == 'c' && comp == 's'){
        return -1;
    }
    if (you == 'p' && comp == 's'){
        return 1;
    }
    if (you == 's' && comp == 'p'){
        return -1;
    }
    if (you == 'c' && comp == 'p'){
        return 1;
    }
    if (you == 'p' && comp == 'c'){
        return -1;
    }

}
int main()
{
    system("cls");
    char you ;
    char comp;
    srand(time(0));
    int number = rand()%100+1;
    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'p';
    }
    else{
        comp = 'c';
    }
    printf("Enter s for stone , p for papper and c for scissor\n");
    scanf("%c",&you);
    int result = stone_ppr_scsr(you,comp);
    if(result==0){
        printf("Game Draww!!\n");}
        else if(result==1){
        printf("YOU WIN!!\n");}
        else{
        printf("YOU LOOSE!!\n");}
    
    printf("You choose %c and computer choose %c",you,comp);
    getch();
    return 0;
}