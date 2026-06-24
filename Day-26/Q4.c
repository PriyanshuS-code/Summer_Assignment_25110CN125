//WAP to Create quiz application.
#include<stdio.h>
int main()
{
    int score = 0,answer;
    printf("===== QUIZ APPLICATION =====\n\n");
    // Question 1
    printf("1. How many laws of motion does exist?\n");
    printf("1.1\n2. 4\n3. 6\n4. 3\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    if (answer == 4)
    {
        score++;
    }

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1.Python\n 2.Java\n 3.C\n 4.HTML\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    if (answer == 3)
    {
        score++;
    }

    // Question 3
    printf("\n3. Which language is most important in AI/ML?\n");
    printf("1.C\n 2.C++\n 3.JAVA\n 4.PYTHON\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    if (answer == 4)
    {
        score++;
    }

    // Question 4
    printf("\n4. Who is known as the Father of Computers?\n");
    printf("1.Charles Babbage\n 2.Alan Turing\n 3.Bill Gates\n 4.Steve Jobs\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    if (answer == 1)
    {
        score++;
    }

    // Question 5
    printf("\n5. Which operator is used for multiplication in C?\n");
    printf("1.x\n 2.*\n 3.#\n 4.&\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    if (answer == 2)
    {
        score++;
    }

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d/5\n",score);
    if (score == 5)
    {
        printf("Excellent!\n");
    }
    else if (score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Keep Practicing!\n");
    }
    return 0;
}