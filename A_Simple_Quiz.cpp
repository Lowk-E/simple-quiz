#include <stdio.h>

struct food_questions {
    
};

int main() {
    printf("Welcome to the game show!!\n");
    printf("Press 'f' to begin.");
    char food = getchar();
    getchar(); 

    int points = 0;
    int array[2] = {200, 100}; 

    if (food == 'f') {
        while (points < 300) {
            printf("Would you like to play for 200 or 100 points? Enter '1' for 100 or '2' for 200. The test ends when you have 300 points from both questions.\n");
            char choice = getchar();
            getchar(); 

            if (choice == '2') {
                if (array[0] == 200) {
                    printf("What is the American food whose name starts with an 'h'? (Answer choices can only be a, b, or c.)\n");
                    printf("A) Hamburger\n");
                    printf("B) Cheeseburger\n");
                    printf("C) Honey\n");
                    char answer = getchar();
                    getchar(); 

                    if (answer != 'a') {
                        printf("Incorrect\n");
                    } else {
                        printf("Correct!\n");
                        points += 200;
                        array[0] = 0; 
                    }
                } else {
                    printf("You already answered this category.\n");
                }
            }

            if (choice == '1') {
                if (array[1] == 100) {
                    printf("It is general consensus that one should consume 100 grams of protein and added sugars every day to maintain muscle growth.\n");
                    printf("Enter 't' if the above statement is true, enter 'f' if false.\n");
                    char answer = getchar();
                    getchar(); 

                    if (answer == 'f') {
                        printf("Correct\n");
                        points += 100;
                        array[1] = 0; 
                    } else {
                        printf("Incorrect\n");
                    }
                } else {
                    printf("You have already answered this category.\n");
                }
            }
        }
    }

    return 0;
}

