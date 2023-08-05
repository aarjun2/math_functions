#include "definition.h"

int main(void) {
    
    int num_one = 0, num_two = 0, num_three = 0, num_four = 0, answer_one = 0, answer_two = 0, option = 0, points = 0;
    int correct_level_one = 0, correct_level_two = 0, correct_level_three = 0, correct_level_four = 0, correct_level_five = 0;;
	int menu_option = 0;
	char initials[15];
	int totaloflevels = 0;
	
    do
    {
        // clrscr();

        printf("\n \t 1. About the program");
        printf("\n \t 2. Enter your initials");
        printf("\n \t 3. Start the quiz");
        printf("\n \t 4. Retrieve my progress");
        printf("\n \t 5. Save my total points");
        printf("\n \t 6. Help");
        printf("\n \t 7. Quit");
        printf("\n Please select an option to proceed: ");
        scanf("%d", &menu_option);

        switch (menu_option)
        {
        case 1:
            // print details
                // clrscr();
            printf("\n Welcome to the world of maths problems");
            printf("\n The program will ask for the level to be selected. Lesser the value, lesser the level");
            printf("\n The higher the level, the tougher will be the problems");
            printf("\n There will be 10 problems within a level");
            printf("\n You have the option to save and get the results back");
            printf("\n \n Please select the option to continue...");
            break;

        case 2:
            // Enter your initials
            // clrscr();
            printf("\n Please enter your initials : ");
            scanf(" %[^\n]s", initials);
            break;

        case 3:
            // play the game
            // clrscr();
            printf("Choose the level difficulty : ");
            scanf("%d", &option);
            switch (option) {
            case 1:
                points = 0;
                srand(time(0));
                num_one = rand() % 10;
                num_two = rand() % 10;
                num_three = rand() % 10;
                for (int i = 0; i < 10; i++) {
                    // made it difficult by not adding that first two numbers must be greater than the third number (allows negative answers), second bigger numbers every correct answer
                    if (correct_level_one == 1) {
                        int upper = 10;
                        int lower = 1;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 2) {
                        int upper = 10;
                        int lower = 2;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 3) {
                        int upper = 10;
                        int lower = 3;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 4) {
                        int upper = 10;
                        int lower = 4;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 5) {
                        int upper = 10;
                        int lower = 5;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 6) {
                        int upper = 10;
                        int lower = 6;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 7) {
                        int upper = 10;
                        int lower = 6;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 8) {
                        int upper = 10;
                        int lower = 7;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 9) {
                        int upper = 10;
                        int lower = 8;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_one == 10) {
                        int upper = 10;
                        int lower = 9;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    printf("\n %d + %d - %d = ", num_one, num_two, num_three);
                    scanf("%d", &answer_one);
                    if (answer_one == (num_one + num_two - num_three)) {
                        printf("\nyou are correct\n");
                        points = points + 5;
                        correct_level_one++;
                    }
                    else {
                        printf("\nyou are incorrect\n");
                        printf("The answer is %d\n", (num_one + num_two - num_three));
                    }
                }
                printf("\nYour points is %d", points);
                totaloflevels += points;
                break;

            case 2:
                points = 0;
                srand(time(0));
                num_one = rand() % 10;
                num_two = rand() % 10;
                num_three = rand() % 10;
                for (int i = 0; i < 10; i++) {
                    // made it difficult by not adding that first two numbers must be greater than the third number (allows negative answers), second bigger numbers every correct answer
                    if (correct_level_two == 1) {
                        int upper = 10;
                        int lower = 1;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 2) {
                        int upper = 10;
                        int lower = 2;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 3) {
                        int upper = 10;
                        int lower = 2;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 4) {
                        int upper = 10;
                        int lower = 3;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 5) {
                        int upper = 10;
                        int lower = 4;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 6) {
                        int upper = 10;
                        int lower = 5;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 7) {
                        int upper = 10;
                        int lower = 6;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 8) {
                        int upper = 10;
                        int lower = 7;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 9) {
                        int upper = 10;
                        int lower = 8;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_two == 10) {
                        int upper = 10;
                        int lower = 9;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    printf("%d * %d = ", num_one, num_two);
                    scanf("%d", &answer_two);
                    if (answer_two == num_one * num_two) {
                        printf("\nyou are correct\n");
                        points = points + 10;
                        correct_level_two++;
                    }
                    else {
                        printf("\nyou are incorrect\n");
                        printf("the answer is %d\n", (num_one * num_two));
                    }
                }
                printf("\n Your points is %d", points);
                totaloflevels += points;
                break;

            case 3:
                points = 0;
                srand(time(0));
                num_one = rand() % 10 + 1;
                num_two = rand() % 10;

                for (int i = 0; i < 10; i++) {
                    // made it difficult by not adding that first two numbers must be greater than the third number (allows negative answers), second bigger numbers every correct answer
                    if (correct_level_three == 1) {
                        int upper = 10;
                        int lower = 1;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 2) {
                        int upper = 10;
                        int lower = 2;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 3) {
                        int upper = 10;
                        int lower = 1;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 4) {
                        int upper = 10;
                        int lower = 3;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 5) {
                        int upper = 10;
                        int lower = 4;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 6) {
                        int upper = 10;
                        int lower = 5;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 7) {
                        int upper = 10;
                        int lower = 6;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 8) {
                        int upper = 10;
                        int lower = 7;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 9) {
                        int upper = 10;
                        int lower = 8;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (correct_level_three == 10) {
                        int upper = 10;
                        int lower = 9;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                    }
                    if (num_one < num_two)
                    {
                        int temp = num_one;
                        num_two = num_one;
                        num_one = temp;
                    }

                    char answer_three[6];
                    char actual_answer_three[6];
                    actual_answer_three[0] = (num_one / num_two) + '0';
                    actual_answer_three[1] = ' ';
                    actual_answer_three[2] = 'R';
                    actual_answer_three[3] = ' ';
                    actual_answer_three[4] = (num_one % num_two) + '0';
                    actual_answer_three[5] = '\0';

                    // get the input from user
                    printf("\n [Enter in the format <q> R <r> ] %d / %d = ", num_one, num_two);
                    scanf(" %[^\n]s", answer_three);

                    if (strcmp(answer_three, actual_answer_three) == 0) {
                        printf("\nyou are correct\n");
                        points = points + 10;
                        correct_level_three++;
                    }
                    else {
                        printf("\nyou are incorrect\n");
                        printf("The answer is : %s\n", actual_answer_three);
                    }
                }
                printf("Total points : %d", points);
                totaloflevels += points;
                break;


            case 4:
                points = 0;
                srand(time(0));
                num_one = rand() % 10 + 1;
                num_two = rand() % 10;
                num_three = rand() % 10;
                int expected_ans = 0;
                correct_level_four = 1;
                int answer_four = 0;

                for (int i = 0; i < 10; i++) {
                    // made it difficult by not adding that first two numbers must be greater than the third number (allows negative answers), second bigger numbers every correct answer
                    if (correct_level_four == 1) {
                        int upper = 10;
                        int lower = -1;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d + %d - %d = ", num_one, num_two, num_three);
                        expected_ans = num_one + num_two - num_three;
                    }
                    if (correct_level_four == 2) {
                        int upper = 10;
                        int lower = -2;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d - %d + %d = ", num_one, num_two, num_three);
                        expected_ans = num_one - num_two + num_three;
                    }
                    if (correct_level_four == 3) {
                        int upper = 10;
                        int lower = -3;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d - %d - %d = ", num_one, num_two, num_three);
                        expected_ans = num_one - num_two - num_three;
                    }
                    if (correct_level_four == 4) {
                        int upper = 10;
                        int lower = -4;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d + %d = ", num_one, num_two, num_three);
                        expected_ans = num_one * num_two + num_three;
                    }
                    if (correct_level_four == 5) {
                        int upper = 10;
                        int lower = -5;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d - %d = ", num_one, num_two, num_three);
                        expected_ans = num_one * num_two - num_three;
                    }
                    if (correct_level_four == 6) {
                        int upper = 10;
                        int lower = -6;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d * %d = ", num_one, num_two, num_three);
                        expected_ans = num_one * num_two * num_three;
                    }
                    if (correct_level_four == 7) {
                        int upper = 10;
                        int lower = -7;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d / %d = ", num_one, num_two, num_three);
                        expected_ans = num_one * num_two / num_three;
                    }
                    if (correct_level_four == 8) {
                        int upper = 10;
                        int lower = -8;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d / %d + %d = ", num_one, num_two, num_three);
                        expected_ans = num_one / num_two + num_three;
                    }

                    if (correct_level_four == 9) {
                        int upper = 10;
                        int lower = -9;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d / %d * %d = ", num_one, num_two, num_three);
                        expected_ans = num_one / num_two * num_three;
                    }
                    if (correct_level_four == 10) {
                        int upper = 10;
                        int lower = -10;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (upper - lower + 1)) + lower;
                        num_three = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d / %d / %d = ", num_one, num_two, num_three);
                        expected_ans = num_one / num_two / num_three;
                    }

                    scanf("%d", &answer_four);
                    if (answer_four == expected_ans)
                    {
                        printf("\nyou are correct\n");
                        points = points + 10;
                        correct_level_four++;
                    }
                    else {
                        printf("\nyou are incorrect\n");
                        printf("the answer is %d\n", expected_ans);
                    }

                }
                printf("\n Your Total points : %d", points);
                totaloflevels += points;
                break;

            case 5:
            {
                points = 0;
                srand(time(0));
                num_one = rand() % 100 + 1;
                num_two = rand() % 1000;
                num_three = rand() % 1000;
                num_four = rand() % 100;
                int expected_ans = 0;
                correct_level_four = 1;
                int answer_four = 0;

                for (int i = 0; i < 10; i++) {
                    // made it difficult by not adding that first two numbers must be greater than the third number (allows negative answers), second bigger numbers every correct answer
                    if (correct_level_five == 1) {
                        int upper = 100;
                        int lower = -1;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d + %d - %d + %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one + num_two - num_three + num_four;
                    }
                    if (correct_level_five == 2) {
                        int upper = 100;
                        int lower = -2;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d - %d + %d - %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one - num_two + num_three - num_four;
                    }
                    if (correct_level_five == 3) {
                        int upper = 100;
                        int lower = -3;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d - %d - %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one - num_two - num_three - num_four;
                    }
                    if (correct_level_five == 4) {
                        int upper = 100;
                        int lower = -4;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d + %d * %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one * num_two + num_three * num_four;
                    }
                    if (correct_level_five == 5) {
                        int upper = 100;
                        int lower = -5;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d - %d * %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one * num_two - num_three * num_four;
                    }
                    if (correct_level_five == 6) {
                        int upper = 100;
                        int lower = -6;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d * %d * %d= ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one * num_two * num_three * num_four;
                    }
                    if (correct_level_five == 7) {
                        int upper = 100;
                        int lower = -7;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        num_four = (rand() % (upper - lower + 1)) + lower;
                        printf("\n %d * %d / %d * %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one * num_two / num_three * num_four;
                    }
                    if (correct_level_five == 8) {
                        int upper = 100;
                        int lower = -8;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        printf("\n %d / %d + %d / %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one / num_two + num_three / num_four;
                    }

                    if (correct_level_five == 9) {
                        int upper = 100;
                        int lower = -9;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        printf("\n %d / %d * %d / %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one / num_two * num_three / num_four;
                    }
                    if (correct_level_five == 10) {
                        int upper = 100;
                        int lower = -10;
                        num_one = (rand() % (upper - lower + 1)) + lower;
                        num_two = (rand() % (1000 - lower + 1)) + lower;
                        num_three = (rand() % (1000 - lower + 1)) + lower;
                        printf("\n %d / %d * %d / %d = ", num_one, num_two, num_three, num_four);
                        expected_ans = num_one / num_two * num_three / num_four;
                    }

                    scanf("%d", &answer_four);
                    if (answer_four == expected_ans)
                    {
                        printf("\nyou are correct\n");
                        points = points + 10;
                        correct_level_five++;
                    }
                    else {
                        printf("\nyou are incorrect\n");
                        printf("the answer is %d\n", expected_ans);
                    }

                }
                printf("\n Total points : %d", points);
                totaloflevels += points;
            }
            break;
            }
            break;


        case 4:
        {
            char temp_initial[15];
            int nproceed = 1;
            if (strlen(initials) == 0)
            {
                printf("\n You don't have any points to retrieve");
                nproceed = 0;
            }
            else
            {
                printf("\n Enter your initials to retieve the file for points : ");
                scanf(" %[^\n]s", temp_initial);
                if (strcmp(temp_initial, initials) == 0)
                {
                    nproceed = 1;
                }
                else
                {
                    printf("\n Please check the initial entered. Not able to retieve the file \n");
                    nproceed = 0;
                }
            }
            if (nproceed == 1)
            {
                char filename[100];
                FILE* file_stream;
                strcpy(filename, "ReadingProgess_");
                strcat(filename, initials);
                strcat(filename, ".txt");
                if (strlen(initials) == 0)
                {
                    printf("\n Initials is not entered..");
                    break;
                }

                else
                {
                    file_stream = fopen(filename, "r");
                    if (file_stream != NULL)
                    {
                        fscanf(file_stream, "%d", &totaloflevels);
                        printf("\n Points read from file : %d \n", totaloflevels);
                        fclose(file_stream);
                    }
                    fclose(file_stream);
                }
            }
        }
        break;

        case 5:
        {
            // Save

            char filename[100];
            FILE* file_stream;
            strcpy(filename, "ReadingProgess_");
            strcat(filename, initials);
            strcat(filename, ".txt");

            file_stream = fopen(filename, "w");

            char points[200];
            //strcpy(points, itoa(totaloflevels));
            fprintf(file_stream, "%d", totaloflevels);
            fclose(file_stream);
        }
        break;


        case 6:
            printf("Step #1. Observe how many digits the divisor has. Step #2. In the dividend, start with the same number of digits that you found in Step #1. Step #3. Compare the 3 digits from the dividend and divisor.If the dividend’s number is greater, we can begin dividing.In our example, we see that 389 is greater than 125, so let’s get started!If the dividend’s number is less than the divisor, we must use another digit from the dividend.We’ll look at an example of this situation at a different time.Step #4. Divide the dividend’s numbers by the divisor’s numbers.Step #5. Bring down the dividend’s next number and divide as you did in the last step until there are no more numbers left.)");
            break;
        case 7:
            // Quit
            printf(" Bye.. See you ");
            break;
        }
        
	} while (menu_option >= 1 && menu_option <= 6);
	    
	
	return 0;
}
