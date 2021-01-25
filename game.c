#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay (int seconds);
void gameRock(int choice);
void gamePaper(int choice);
void gameScissor(int choice);
int computer_score = 0;
int player_score = 0;

int main(void)
{
    printf("back ~ next (B ~ N): ");
    char Next_or_Back;
    scanf(" %c", &Next_or_Back);
    if ((Next_or_Back == 'N') || (Next_or_Back == 'n')) {
        int looding = 0;
        while (looding <= 100) {
	    printf("Looding %d%%\n", looding);
	    delay(50);
	    system("clear");
	    looding++;
        }
        unsigned int count = 1;
        while (count <= 100) {
	    printf("1.Rock \n");
	    printf("2.Paper \n");
	    printf("3.Scissor \n");
	    printf("Enter: ");
	    int user_choice;
	    scanf("%d", &user_choice);

	    if (user_choice == 1) {
		gameRock(1); // function
		delay(3000);
		system("clear");
		if (computer_score == 100) {
		    printf("You Lost!\n");
		    break;
		} else if (player_score == 100) {
		    printf("You Won!\n");
		    break;
		} else {
		    continue;
		}
	    } else if (user_choice == 2) {
		gamePaper(2);
		delay(3000);
		system("clear");
		if (player_score == 100) {
		    printf("You Won!\n");
		    break;
		} else if (computer_score == 100) {
		    printf("You Lost!\n");
		    break;
		} else {
		    continue;
		}
	    } else if (user_choice == 3) {
		gameScissor(3);
		delay(3000);
		system("clear");
		if (player_score == 100) {
		    printf("You Won!\n");
		    break;
		} else if (computer_score == 100) {
		    printf("You Lost!\n");
		    break;
		} else {
		    continue;
		}
	    }
	    count += 1;
        }

    } else {
	printf("you left!\n");
    }
    return 0;
}

void delay (int seconds) {
    int milli_second = 1000 * seconds;
    // storing
    clock_t start_time = clock();
    // loop
    while (clock() < start_time + milli_second);
}

void gameRock(int choice) {
    if (choice == 1) {
        srand(time(NULL));
        int computer = (rand() % 3) + 1;

        if (computer == 1) {
            system("clear");
	    printf("You: Rock || ");
	    printf("Computer: Rock \n");
	    computer_score += 0;
	    player_score += 0;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        } else if (computer == 2) {
            system("clear");
	    printf("You: Rock || ");
	    printf("Computer: Paper \n");
	    computer_score += 10;
	    player_score += 0;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        } else if (computer == 3) {
            system("clear");
	    printf("You: Rock || ");
	    printf("Computer: Scissor \n");
	    computer_score += 0;
	    player_score += 10;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        }
    }
}

void gamePaper(int choice) {
    if (choice == 2) {
        srand(time(NULL));
        int computer = (rand() % 3) + 1;

        if (computer == 1) {
            system("clear");
	    printf("You: Paper || ");
	    printf("Computer: Rock \n");
	    computer_score += 0;
	    player_score += 10;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        } else if (computer == 2) {
            system("clear");
	    printf("You: Paper || ");
	    printf("Computer: Paper \n");
	    computer_score += 0;
	    player_score += 0;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        } else if (computer == 3) {
	    system("clear");
	    printf("You: Paper || ");
	    printf("Computer: Scissor \n");
	    computer_score += 10;
	    player_score += 0;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        }
    }
}

void gameScissor(int choice) {
    if (choice == 3) {
        srand(time(NULL));
        int computer = (rand() % 3) + 1;

        if (computer == 1) {
            system("clear");
	    printf("You: Scissor || ");
	    printf("Computer: Rock \n");
	    computer_score += 10;
	    player_score += 0;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        } else if (computer == 2) {
	    system("clear");
	    printf("You: Scissor || ");
	    printf("Computer: Paper \n");
	    computer_score += 0;
	    player_score += 10;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        } else if (computer == 3) {
            system("clear");
	    printf("You: Scissor || ");
	    printf("Computer: Scissor \n");
	    computer_score += 0;
	    player_score += 0;
	    printf("Score >> You: %d ", player_score);
	    printf("Computer: %d\n", computer_score);
        }
    }
}
