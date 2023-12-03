#include "myheader.h"

// Function to calculate and display the highest and lowest scores for a given subject

void HLscore(CData array[], char names[][15], int size)
{   
    
    int userInput3;
    int i, max, min, IDX, IDN, NX, N;

    // menu
    printf("Please enter the number\n 1. Chinese (enter 1)\n 2. English (enter 2)\n 3. Science (enter 3)\n 4. Math (enter 4)\n 5. Biology (enter 5)\n 6. Total Score (enter 6) ");
    scanf("%d", &userInput3);

    
    switch(userInput3)
    {
        // Case 1: Chinese subject
        case 1:
            max = min = array[0].chinese;
            IDX = IDN = array[0].acctNum;
            NX = N = 0;

            // find the highest and lowest scores 
            for(i = 0; i < size; i++)
            {
                if(array[i].chinese > max)
                {
                    max = array[i].chinese;
                    IDX = array[i].acctNum;
                    NX = i;
                }
                if(array[i].chinese < min)
                {
                    min = array[i].chinese;
                    IDN = array[i].acctNum;
                    N = i;
                }
            }

            // Display 
            printf("The max value of Chinese is %d\t, Account number:%d\t, Name:%s\n", max, IDX, names[NX]);
            printf("The min value of Chinese is %d\t, Account number:%d\t, Name:%s\n", min, IDN, names[N]);
            printf("\n");
            break;

        // Case 2: English subject
        case 2:
            
            max = min = array[0].english;
            IDX = IDN = array[0].acctNum;
            NX = N = 0;

            for(i = 0; i < size; i++)
            {
                if(array[i].english > max)
                {
                    max = array[i].english;
                    IDX = array[i].acctNum;
                    NX = i;
                }
                if(array[i].english < min)
                {
                    min = array[i].english;
                    IDN = array[i].acctNum;
                    N = i;
                }
            }

            printf("The max value of English is %d\t, Account number:%d\t, Name:%s\n", max, IDX, names[NX]);
            printf("The min value of English is %d\t, Account number:%d\t, Name:%s\n", min, IDN, names[N]);
            printf("\n");
            break;

        // Case 3: Science subject
        case 3:
            max = min = array[0].science;
            IDX = IDN = array[0].acctNum;
            NX = N = 0;

            for(i = 0; i < size; i++)
            {
                if(array[i].science > max)
                {
                    max = array[i].science;
                    IDX = array[i].acctNum;
                    NX = i;
                }
                if(array[i].science < min)
                {
                    min = array[i].science;
                    IDN = array[i].acctNum;
                    N = i;
                }
            }

            printf("The max value of Science is %d\t, Account number:%d\t, Name:%s\n", max, IDX, names[NX]);
            printf("The min value of Science is %d\t, Account number:%d\t, Name:%s\n", min, IDN, names[N]);
            printf("\n");
            break;

        // Case 4: Math subject
        case 4:
            max = min = array[0].math;
            IDX = IDN = array[0].acctNum;
            NX = N = 0;

            for(i = 0; i < size; i++)
            {
                if(array[i].math > max)
                {
                    max = array[i].math;
                    IDX = array[i].acctNum;
                    NX = i;
                }
                if(array[i].math < min)
                {
                    min = array[i].math;
                    IDN = array[i].acctNum;
                    N = i;
                }
            }

            // Display the results for Math subject
            printf("The max value of Math is %d\t, Account number:%d\t, Name:%s\n", max, IDX, names[NX]);
            printf("The min value of Math is %d\t, Account number:%d\t, Name:%s\n", min, IDN, names[N]);
            printf("\n");
            break;

        // Case 5: Biology subject
        case 5:
            max = min = array[0].biology;
            IDX = IDN = array[0].acctNum;
            NX = N = 0;

            // Loop through the array to find the highest and lowest scores for Biology
            for(i = 0; i < size; i++)
            {
                if(array[i].biology > max)
                {
                    max = array[i].biology;
                    IDX = array[i].acctNum;
                    NX = i;
                }
                if(array[i].biology < min)
                {
                    min = array[i].biology;
                    IDN = array[i].acctNum;
                    N = i;
                }
            }

            // Display the results for Biology subject
            printf("The max value of Biology is %d\t, Account number:%d\t, Name:%s\n", max, IDX, names[NX]);
            printf("The min value of Biology is %d\t, Account number:%d\t, Name:%s\n", min, IDN, names[N]);
            printf("\n");
            break;

        // Case 6: Total score
        case 6:
            max = min = array[0].total;
            IDX = IDN = array[0].acctNum;
            NX = N = 0;

            // Loop through the array to find the highest and lowest total scores
            for(i = 0; i < size; i++)
            {
                if(array[i].total > max)
                {
                    max = array[i].total;
                    IDX = array[i].acctNum;
                    NX = i;
                }
                if(array[i].total < min)
                {
                    min = array[i].total;
                    IDN = array[i].acctNum;
                    N = i;
                }
            }

            // Display the results for total scores
            printf("The max value of Total is %d\t, Account number:%d\t, Name:%s\n", max, IDX, names[NX]);
            printf("The min value of Total is %d\t, Account number:%d\t, Name:%s\n", min, IDN, names[N]);
            break;

        // Default case for invalid input
        default:
            printf("Invalid input. Please enter number\n 1. Chinese (enter 1)\n 2. English (enter 2)\n 3. Science (enter 3)\n 4. Math (enter 4)\n 5. Biology (enter 5)\n 6. Total Score (enter 6).\n");
            break;
    }
}
