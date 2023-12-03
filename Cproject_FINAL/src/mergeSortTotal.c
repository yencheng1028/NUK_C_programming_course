#include "myheader.h"

void merge(CData array[], char names[][15], int size)
{
    int userInput2;

    // menu
    printf("Enter a number (Chinese enter 1/English enter 2/Science enter 3/Math enter 4/Biology enter 5): ");

    scanf("%d", &userInput2);
    int *arrayc;
    arrayc =(int *) malloc(size * sizeof(CData));
    int i,temp = 0;
    int MAX = 0;
    
    switch (userInput2)
    {
    case 1:
        // Copy array and names to arrayc
        for (int v = 0; v < size; v++)
        {
            arrayc[v][0] = v; // Save the original order for final output
            arrayc[v][1] = (array + v)->chinese;
            arrayc[v][2] = v; // Save the original order for final output
        }

        for (int j = 0; j < size; j++)
        {
            MAX = 0;
            int k=0;
            for (i = j; i < size; i++)
            {
                if (arrayc[i][1] >= MAX)
                {
                    MAX = arrayc[i][1];
                    k = i; // Find the position of the maximum value
                }
            }

            // Swap values to perform selection sort
            temp = arrayc[j][1];
            arrayc[j][1] = arrayc[k][1];
            arrayc[k][1] = temp;

            temp = arrayc[j][0];
            arrayc[j][0] = arrayc[k][0];
            arrayc[k][0] = temp;

            temp = arrayc[j][2];
            arrayc[j][2] = arrayc[k][2];
            arrayc[k][2] = temp;
        }

        for (int p = 0; p < size; p++)
        {
            int index = arrayc[p][0]; // Get the original order
            printf("%d\t ID:%d\t %s\t %d\n", p + 1, (array + index)->acctNum, names[index], arrayc[p][1]);
        }

        break;
    case 2:
        // Copy array and names to arrayc
        for (int v = 0; v < size; v++)
        {
            arrayc[v][0] = v; // Save the original order for final output
            arrayc[v][1] = (array + v)->english;
            arrayc[v][2] = v; // Save the original order for final output
        }

        for (int j = 0; j < size; j++)
        {
            MAX = 0;
            int k=0;
            for (i = j; i < size; i++)
            {
                if (arrayc[i][1] >= MAX)
                {
                    MAX = arrayc[i][1];
                    k = i; // Find the position of the maximum value
                }
            }

            // Swap values to perform selection sort
            temp = arrayc[j][1];
            arrayc[j][1] = arrayc[k][1];
            arrayc[k][1] = temp;

            temp = arrayc[j][0];
            arrayc[j][0] = arrayc[k][0];
            arrayc[k][0] = temp;

            temp = arrayc[j][2];
            arrayc[j][2] = arrayc[k][2];
            arrayc[k][2] = temp;
        }

        for (int p = 0; p < size; p++)
        {
            int index = arrayc[p][0]; // Get the original order
            printf("%d\t ID:%d\t %s\t %d\n", p + 1, (array + index)->acctNum, names[index], arrayc[p][1]);
        }

        break;
    case 3:
        // Copy array and names to arrayc
        for (int v = 0; v < size; v++)
        {
            arrayc[v][0] = v; // Save the original order for final output
            arrayc[v][1] = (array + v)->science;
            arrayc[v][2] = v; // Save the original order for final output
        }

        for (int j = 0; j < size; j++)
        {
            MAX = 0;
            int k=0;
            for (i = j; i < size; i++)
            {
                if (arrayc[i][1] >= MAX)
                {
                    MAX = arrayc[i][1];
                    k = i; // Find the position of the maximum value
                }
            }

            // Swap values to perform selection sort
            temp = arrayc[j][1];
            arrayc[j][1] = arrayc[k][1];
            arrayc[k][1] = temp;

            temp = arrayc[j][0];
            arrayc[j][0] = arrayc[k][0];
            arrayc[k][0] = temp;

            temp = arrayc[j][2];
            arrayc[j][2] = arrayc[k][2];
            arrayc[k][2] = temp;
        }

        for (int p = 0; p < size; p++)
        {
            int index = arrayc[p][0]; // Get the original order
            printf("%d\t ID:%d\t %s\t %d\n", p + 1, (array + index)->acctNum, names[index], arrayc[p][1]);
        }

        break;
    case 4:
        // Copy array and names to arrayc
        for (int v = 0; v < size; v++)
        {
            arrayc[v][0] = v; // Save the original order for final output
            arrayc[v][1] = (array + v)->math;
            arrayc[v][2] = v; // Save the original order for final output
        }

        for (int j = 0; j < size; j++)
        {
            MAX = 0;
            int k=0;
            for (i = j; i < size; i++)
            {
                if (arrayc[i][1] >= MAX)
                {
                    MAX = arrayc[i][1];
                    k = i; // Find the position of the maximum value
                }
            }

            // Swap values to perform selection sort
            temp = arrayc[j][1];
            arrayc[j][1] = arrayc[k][1];
            arrayc[k][1] = temp;

            temp = arrayc[j][0];
            arrayc[j][0] = arrayc[k][0];
            arrayc[k][0] = temp;

            temp = arrayc[j][2];
            arrayc[j][2] = arrayc[k][2];
            arrayc[k][2] = temp;
        }

        for (int p = 0; p < size; p++)
        {
            int index = arrayc[p][0]; // Get the original order
            printf("%d\t ID:%d\t %s\t %d\n", p + 1, (array + index)->acctNum, names[index], arrayc[p][1]);
        }

        break;
    case 5:
        // Copy array and names to arrayc
        for (int v = 0; v < size; v++)
        {
            arrayc[v][0] = v; // Save the original order for final output
            arrayc[v][1] = (array + v)->biology;
            arrayc[v][2] = v; // Save the original order for final output
        }

        for (int j = 0; j < size; j++)
        {
            MAX = 0;
            int k=0;
            for (i = j; i < size; i++)
            {
                if (arrayc[i][1] >= MAX)
                {
                    MAX = arrayc[i][1];
                    k = i; // Find the position of the maximum value
                }
            }

            // Swap values to perform selection sort
            temp = arrayc[j][1];
            arrayc[j][1] = arrayc[k][1];
            arrayc[k][1] = temp;

            temp = arrayc[j][0];
            arrayc[j][0] = arrayc[k][0];
            arrayc[k][0] = temp;

            temp = arrayc[j][2];
            arrayc[j][2] = arrayc[k][2];
            arrayc[k][2] = temp;
        }

        for (int p = 0; p < size; p++)
        {
            int index = arrayc[p][0]; // Get the original order
            printf("%d\t ID:%d\t %s\t %d\n", p + 1, (array + index)->acctNum, names[index], arrayc[p][1]);
        }

        break;
    default:
        
        printf("Invalid input. Please enter a number (Chinese enter 1/English enter 2/Science enter 3/Math enter 4/Biology enter 5).\n");
        break;
    }
    free(arrayc);
}

void sort_totalscore(CData *array, char names[][15], int size)
{
    int (*arrayc)[3] = malloc(size * sizeof(*arrayc));
    int i, temp = 0;
    int MAX = 0;
    for (int v = 0; v < size; v++)
    {
        arrayc[v][0] = v; // Save the original order for final output
        arrayc[v][1] = (array + v)->total;
        arrayc[v][2] = v; // Save the original order for final output
    }

    for (int j = 0; j < size; j++)
    {
        MAX = 0; // Reset MAX
        int k=0;
        for (i = j; i < size; i++)
        {
            if (arrayc[i][1] >= MAX)
            {
                MAX = arrayc[i][1];
                k = i; // Find the position of the maximum value
            }
        }

        // Swap values to perform selection sort
        temp = arrayc[j][1];
        arrayc[j][1] = arrayc[k][1];
        arrayc[k][1] = temp;

        temp = arrayc[j][0];
        arrayc[j][0] = arrayc[k][0];
        arrayc[k][0] = temp;

        temp = arrayc[j][2];
        arrayc[j][2] = arrayc[k][2];
        arrayc[k][2] = temp;
    }

    for (int p = 0; p < size; p++)
    {
        int index = arrayc[p][0]; // Get the original order
        printf("%d\t ID:%d\t %s\t %d\n", p + 1, (array + index)->acctNum, names[index], arrayc[p][1]);
    }
}
