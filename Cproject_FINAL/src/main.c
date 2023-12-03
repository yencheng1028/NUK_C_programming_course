#include "myheader.h"

#define SIZE 50

int main()
{   
    // Declare an array of CData structures with SIZE
    CData st[SIZE];
    
    char names[50][15] = {
        "Alice", "Bob", "Charlie", "David", "Eva",
        "Frank", "Grace", "Henry", "Ivy", "Jack",
        "Katherine", "Leo", "Mia", "Nathan", "Olivia",
        "Peter", "Quinn", "Rachel", "Samuel", "Tina",
        "Ulysses", "Victoria", "William", "Xander", "Yvonne",
        "Zane", "Amy", "Benjamin", "Chloe", "Daniel",
        "Emily", "Felix", "Gina", "Harry", "Isabel",
        "Jake", "Karen", "Liam", "Megan", "Nora",
        "Oscar", "Pamela", "Quentin", "Ruby", "Simon",
        "Tracy", "Ursula", "Vincent", "Wendy", "Xavier"
    };
    
    
    double avgEnglish = 0.0, stdDevEnglish;
    double avgChinese = 0.0, stdDevChinese;
    double avgMath = 0.0, stdDevMath;
    double avgScience = 0.0, stdDevScience;
    double avgBiology = 0.0, stdDevBiology;
    
    
    int userInput1;
    
    // Seed the random number generator
    srand(time(0));
    
    printf("\nData saved to 'clents.txt'\n");
    printf("===== Random =====\n");
    
    // Generate random numbers and display student data
    RandomNumber(st, SIZE);
    
    writeDataToFile(st, names, SIZE);

    // Main program loop
    while (1)
    {
        // Display menu options to the user
        printf("==================================================\n");
        printf("Please enter the number:\n 1. Display all score data (enter 1)\n 2. Sort the subject score (enter 2)\n 3. Sort total score (enter 3)\n 4. Find the Highest/Lowest score (enter 4)\n 5. Calculate the average, standard deviation, highest score, and lowest score for each subject (enter 5)\n 6. Find the grades of a student based on his student number (enter 6)\n 9. End program (enter 9)\n");
        
        // Read user input
        scanf("%d", &userInput1);
        
        // Check if the user wants to end the program
        if (userInput1 == 9) 
        { 
            break;
        }
        
        
        switch (userInput1)
        {
            case 1:
                // Display all score data
                display(st, names, SIZE);
                printf("\n");
                break;
            case 2:
                // Sort the subject score
                merge(st, names, SIZE);
                printf("\n");
                break;
            case 3:
                // Sort total score
                sort_totalscore(st, names, SIZE);
                break;
            case 4:
                // Find the Highest/Lowest score
                HLscore(st, names, SIZE);
                break;
            case 5:
                // Calculate statistics for each subject
                calculateSubjectStatistics(st, SIZE, "English", &avgEnglish, &stdDevEnglish);
                calculateSubjectStatistics(st, SIZE, "Chinese", &avgChinese, &stdDevChinese);
                calculateSubjectStatistics(st, SIZE, "Math", &avgMath, &stdDevMath);
                calculateSubjectStatistics(st, SIZE, "Science", &avgScience, &stdDevScience);
                calculateSubjectStatistics(st, SIZE, "Biology", &avgBiology, &stdDevBiology);

                // Print the statistics for each subject
                printf("\nSubject Statistics:\n");
                printSubjectStatistics("English", avgEnglish, stdDevEnglish);
                englishmaxmin(st,SIZE);
                printSubjectStatistics("Chinese", avgChinese, stdDevChinese);
                chinesemaxmin(st,SIZE);
                printSubjectStatistics("Math", avgMath, stdDevMath);
                mathmaxmin(st,SIZE);
                printSubjectStatistics("Science", avgScience, stdDevScience);
                sciencemaxmin(st,SIZE);
                printSubjectStatistics("Biology", avgBiology, stdDevBiology);
                biologymaxmin(st,SIZE);

                printf("\n");
                break;
            case 6:
            
                findStudentById(st, names, SIZE);
                break;
            default:
                
                printf("Invalid input. Please enter number:\n 1. Display all score data (enter 1)\n 2. Sort the subject score (enter 2)\n 3. Sort total score (enter 3)\n 4. Find the Highest/Lowest score (enter 4)\n 5. Calculate the average, standard deviation, highest score, and lowest score for each subject (enter 5)\n 6. Find the grades of a student based on his student number (enter 6)\n 9. End program (enter 9)\n");
                break;
        }
    }
    

    system("pause");
    return 0;
}
