#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total11, total12, total13;

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
        printf("Correct!");
        point1 = 5;
        printf("You have scored %d points", point1);
    }
    else
    {
        printf("Wrong Answer!\n");
        point01 = 0;
        printf("You have score %d point", point01);
    }

    printf("2) Which of this is the first browser created in 1990?\n\n");
    printf("1) Internet Explorer\n");
    printf("2) Mosaic\n");
    printf("3) Mozilla\n");
    printf("4) Nexus\n");

    printf("Enter your answer in number please: ");
    scanf("%d", ans2);
    
    if(ans2 == 4)
    {
        printf("Correct!");
        point2 = 5;
        printf("You have scored %d points", point3);
    }
    else
    {
        printf("Wrong Answer!\n");
        point02 = 0;
        printf("You have score %d point", point01);
    }
    
    printf("3) The first computer virus is?\n\n");
    printf("1) Rabbit\n");
    puts("2) Creeper Virus");
    puts("3) Elk Cloner");
    puts("4) SCA Virus");

    printf("Enter your answer in number please: ");
    scanf("%d", ans3);
    
    if(ans3 == 4)
    {
        printf("Correct!");
        point3 = 5;
        printf("You have scored %d points", point3);
    }
    else
    {
        printf("Wrong Answer!\n");
        point03 = 0;
        printf("You have score %d point", point03);
    }
}