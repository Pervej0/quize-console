#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    printf("      Welcome To Quiz Quiz Game \n\n");
    printf("   Your time is recording under the hood try to answer fast. \n\n");
    int i;
    char ans1[2], ans2[2], ans3[2], ans4[2], ans5[2];
    int point = 0;
    int wrongAns = 0;
    printf("> Press 7 to Start The Game\n");
    printf("> Press 0 to Quit the Game \n");
    scanf("%d", &i);

    if(i != 7){
        printf("======== Game quit successfully ====== \n\n");
        return 0;
    }

    printf("1. What is a data structure? \n");
    printf("a) A programming language \n");
    printf("b) A collection of algorithms \n");
    printf("c) A way to store and organize data \n");
    printf("d) A type of computer hardware \n\n");
    scanf("%s", ans1);
    if(strcmp(ans1, "c") == 0){
        printf("Correct Answer. \n\n");
        point = 5;
    }else{
        printf("Wrong Answer. \n");
        wrongAns++;
        printf("Correct Answer is c. \n\n");
    }

    printf("2. What are the disadvantages of arrays? \n");
    printf("a) Index value of an array can be negative \n");
    printf("b) Elements are sequentially accessed \n");
    printf("c) Data structure like queue or stack cannot be implemented \n");
    printf("d) There are chances of wastage of memory space if elements inserted in an array are lesser than the allocated size \n\n");
    scanf("%s", ans2);
    if(strcmp(ans2, "d") == 0){
        printf("Correct Answer. \n\n");
        point += 5;
    }else{
        printf("Wrong Answer. \n\n");
        wrongAns++;
        printf("Correct Answer is d \n\n");
    }

    printf("3. Which data structure is used for implementing recursion? \n\n");
    printf("a) Stack \n");
    printf("b) Queue \n");
    printf("c) List \n");
    printf("d) Array \n\n");
    scanf("%s", ans3);
    if(strcmp(ans3, "a") == 0){
        printf("Correct Answer. \n\n");
        point += 5;
    }else{
        printf("Wrong Answer. \n\n");
        wrongAns++;
        printf("Correct Answer is a \n\n");
    }

    printf("4. Which of the following is not the application of stack? \n");
    printf("a) Data Transfer between two asynchronous process \n");
    printf("b) Compiler Syntax Analyzer \n");
    printf("c) Tracking of local variables at run time \n");
    printf("d) A parentheses balancing program \n\n");
    scanf("%s", ans4);
    if(strcmp(ans4, "a") == 0){
        printf("Correct Answer. \n\n");
        point += 5;
    }else{
        printf("Wrong Answer. \n\n");
        wrongAns++;
        printf("Correct Answer is a \n\n");
    }

    printf("5. Which of the following is not the application of stack? \n");
    printf("a) Data Transfer between two asynchronous process \n");
    printf("b) Compiler Syntax Analyzer \n");
    printf("c) Tracking of local variables at run time \n");
    printf("d) A parentheses balancing program \n\n");
    scanf("%s", ans5);
    if(strcmp(ans5, "a") == 0){
        printf("Correct Answer. \n\n");
        point += 5;
    }else{
        printf("Wrong Answer. \n\n");
        wrongAns++;
        printf("Correct Answer is a \n\n");
    }

    end_time = clock();
    printf("======== Well Done You completed the quiz ======== \n\n");
    printf("Your total score is: %d \n", point);
    elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Total time takes: %.4f seconds\n", elapsed_time);
    printf("Total wrong ans is %d \n\n", wrongAns);

    return 0;
}


