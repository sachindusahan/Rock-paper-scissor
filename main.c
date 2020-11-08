/******************************
* Title: Rock Paper Scissor   *
* Topic: C Game               *
* programmer = Sachindu Sahan *
* date: 2020/11/09            *
*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int startGame, userChoice, botChoice, userScore=0, botScore=0;
    srand(time(NULL));
    printf("\t1.Start\n\t2.Help\n\t3.Quit\n");
    printf("Enter: ");
    scanf("%d", &startGame);
    if(startGame==1){
        printf("\n1.Rock\n2.Paper\n3.Scissor\n");
        printf("Enter: ");
        scanf("%d", &userChoice);
        botChoice = rand()%4+1;
        if((userChoice==1)&&(botChoice==1)){
	    int u_point=0;
	    int b_point=0;
	    userScore=userScore+u_point;
	    botScore=botScore+b_point;
	    printf("your score: %d\ncomputer score: %d\n", userScore, botScore);
        }else{
	    printf("not yet\n");
        }
    }else if(startGame==2){
        printf("A player who decides to play rock will beat another player who has chosen scissors rock crushes scissors or sometimes blunts scissors but will lose to one who has played paper paper covers rock a play of paper will lose to a play of scissors scissors cuts paper");
        printf("players: 2\nplaying time: instant\ngenre: hand game\nsetup time: none\n");
    }else if(startGame==3){
        printf("quiting...\n");
    }
    return 0;
}
