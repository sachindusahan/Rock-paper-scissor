#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int loop_count = 1;
    int user_point = 0, computer_point = 0;
    int user_choice, computer_choice;
    srand(time(NULL));
    while(loop_count<=100){
        printf("1.Rock\n2.Paper\n3.Scissor\n");
        printf("Enter your choice: ");
        scanf("%d", &user_choice);
        computer_choice = rand()%4+1;
        if((user_choice==1) && (computer_choice==1)){
            user_point = user_point + 0;
            computer_point = computer_point + 0;
            printf("user: %d\ncomputer: %d\n", user_point, computer_point);
            if(user_point>=100){
                printf("You won\n");
                break;
            }else if(computer_point>=100){
		printf("you loss\n");
		break;
            }else{
		continue;
            } // break //
        }else if((user_choice==1) && (computer_choice==2)){
            user_point = user_point + 0;
            computer_point = computer_point + 10;
        }else if((user_choice==1) && (computer_choice==3)){
            user_point = user_point + 10;
            computer_point = computer_point + 0;
        }
        loop_count+=1;
    }
    return 0;
}
