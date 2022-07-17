#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4;
    int point1;
    int point01;

    printf("   Welcome to my game\n\n");

    printf("> press 7 to start the game\n");
    printf("> press 0 to quit the game\n");
    scanf("%d", &i);

    if(i == 7)
    {
        printf("The game as Started\n\n");
    }
    else
    {
        printf("thanks for visiting\n");
        exit(0);
    }

    printf("1) Which of this tis the first search engine in the internet?\n\n");
    printf("1) Google\n");
    printf("2) Archies\n");
    printf("3) Waies\n");
    printf("4) Altavista\n");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans1);

    if(ans1 == 2)
    {
        printf("\nCorrect!\n");
        point1 = 5;
        printf("You have scored %d points",point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = 1;
        printf("You have score %d point\n", point01);
    }

    printf("2) Which of this is the first browser created in 1990?\n\n");
    printf("1) Internet Explorer\n");
    printf("2) Mosaic\n");
    printf("3) Mozilla\n");
    printf("4) Nexus\n");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans2);
    
    if(ans2 == 4)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }
    
    printf("3) The first computer virus is?\n\n");
    printf("1) Rabbit\n");
    puts("2) Creeper Virus");
    puts("3) Elk Cloner");
    puts("4) SCA Virus");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans3);
    
    if(ans3 == 4)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("4) Which of the following age is not part of the dependency load?\n\n");
    printf("1) 10-14\n");
    puts("2) 15-19");
    puts("3) 0-4");
    puts("4) 65-69");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans4);
    
    if(ans4 == 2)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("\nYou have scored %d points\n", point1);
    }
    else
    {
        printf("Wrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point", point01);
    }

    printf("5) Which of the following is an example of aPushfactor?\n\n");
    printf("1) Better job opportunities\n");
    puts("2) War");
    puts("3) Lower Taxes");
    puts("4) Joining Family");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans1);
    
    if(ans1 == 2)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("6) Which of the following is an example of aPullFactor?\n\n");
    printf("1) Favorable Conditions\n");
    puts("2) Religious Persecution");
    puts("3) Terrorism");
    puts("4) Natural Disasters");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans2);
    
    if(ans2 == 1)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("7) Which type of immigrant needs to have an ability to make a\n significant financial contribution to Canada’s economy?\n\n");
    printf("1) Refugee\n");
    puts("2) Skilled Worker");
    puts("3) Business Immigran");
    puts("4) Natural Disasters");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans3);
    
    if(ans3 == 3)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("8) Which type of immigrant is reunited with a close family member, who is sponsoring them inCanada?\n\n");
    printf("1) Refugee\n");
    puts("2) Skilled Worker");
    puts("3) Business Immigran");
    printf("4) Family Immigrant");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans4);
    
    if(ans4 == 4)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("9) Which type of immigrant fears cruel or inhumane treatment in their home country?\n\n");
    printf("1) Refugee\n");
    puts("2) Skilled Worker");
    puts("3) Business Immigran");
    printf("4) Family Immigrant");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans1);
    
    if(ans1 == 1)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("10) Which type of immigrant needs to receive a score of 67 points or higher on animmigration test to be able to immigrate?\n\n");
    printf("1) Refugee\n");
    puts("2) Skilled Worker");
    puts("3) Business Immigran");
    printf("4) Family Immigrant");

    printf("Enter your answer in number please: ");
    scanf("%d", &ans2);
    
    if(ans2 == 2)
    {
        printf("\nCorrect!\n");
        point1 = point1 + 5;
        printf("You have scored %d points\n", point1);
    }
    else
    {
        printf("\nWrong Answer!\n");
        point01 = point01 + 1;
        printf("You have score %d point\n", point01);
    }

    printf("your total score is: %d \n", point1);
    printf("you total missed this qestion: %d \n", point01);
}