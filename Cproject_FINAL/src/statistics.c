#include "myheader.h"

void calculateSubjectStatistics(CData array[], int size, const char *subject,double *average, double *stdDev)
{
    // Initialize
    double sum = 0.0;
    double sumSquaredDiff = 0.0;

    // Loop through the array and calculate sum, squared differences, highest, and lowest
    for (int i = 0; i < size; i++)
    {
        int subjectScore;

        // Determine which subject to consider
        if (strcmp(subject, "English") == 0)
            subjectScore = array[i].english;
        else if (strcmp(subject, "Chinese") == 0)
            subjectScore = array[i].chinese;
        else if (strcmp(subject, "Math") == 0)
            subjectScore = array[i].math;
        else if (strcmp(subject, "Science") == 0)
            subjectScore = array[i].science;
        else if (strcmp(subject, "Biology") == 0)
            subjectScore = array[i].biology;
        else
        {
            // Handle invalid subject name
            printf("Invalid subject name: %s\n", subject);
            return;
        }

        // Update sum, squared differences
        sum += subjectScore;
////        sumSquaredDiff += pow(subjectScore - *average, 2);
    }

    // Calculate average and standard deviation
    *average = sum / size;
////    *stdDev = sqrt(sumSquaredDiff / size);

    // Loop through the array again to calculate squared differences
    for (int i = 0; i < size; i++)
    {
        int subjectScore;

        // Determine which subject to consider
        if (strcmp(subject, "English") == 0)
            subjectScore = array[i].english;
        else if (strcmp(subject, "Chinese") == 0)
            subjectScore = array[i].chinese;
        else if (strcmp(subject, "Math") == 0)
            subjectScore = array[i].math;
        else if (strcmp(subject, "Science") == 0)
            subjectScore = array[i].science;
        else if (strcmp(subject, "Biology") == 0)
            subjectScore = array[i].biology;
        else
        {
            // Handle invalid subject name
            printf("Invalid subject name: %s\n", subject);
            return;
        }

        // Update sumSquaredDiff
        sumSquaredDiff += pow(subjectScore - *average, 2);
    }

    // Calculate standard deviation
    *stdDev = sqrt(sumSquaredDiff / size);
}


void printSubjectStatistics(const char *subject, double average, double stdDev)
{
    // Print subject-specific statistics
    printf("\nStatistics for %s:\n", subject);
    printf("Average: %2.2lf\n", average);
    printf("Standard Deviation: %2.2lf\n", stdDev);
}


void chinesemaxmin(CData array[], int size) {
    int i, max, min;
    // Initialize max and min with the first element of the array
    max = min = array[0].chinese;

    // Loop through the array to find the maximum and minimum values
    for (i = 0; i < size; i++) {
        if (array[i].chinese > max) {
            max = array[i].chinese;
        }
        if (array[i].chinese < min) {
            min = array[i].chinese;
        }
    }

    // Print the results
    printf("the max value of chinese is %d\t\n", max);
    printf("the min value of chinese is %d\t\n", min);
    printf("\n");
}

// Function to find the maximum and minimum values of math scores
void mathmaxmin(CData array[], int size) {
    int i, max, min;
    // Initialize max and min with the first element of the array
    max = min = array[0].math;

    for (i = 0; i < size; i++) {
        if (array[i].math > max) {
            max = array[i].math;
        }
        if (array[i].math < min) {
            min = array[i].math;
        }
    }

    printf("the max value of math is %d\t\n", max);
    printf("the min value of math is %d\t\n", min);
    printf("\n");
}

// Function to find the maximum and minimum values of English scores
void englishmaxmin(CData array[], int size) {
    int i, max, min;

    // Initialize max and min with the first element of the array
    max = min = array[0].english;

    for (i = 0; i < size; i++) {
        if (array[i].english > max) {
            max = array[i].english;
        }
        if (array[i].english < min) {
            min = array[i].english;
        }
    }

    printf("the max value of english is %d\t\n", max);
    printf("the min value of english is %d\t\n", min);
    printf("\n");
}

// Function to find the maximum and minimum values of science scores
void sciencemaxmin(CData array[], int size) {
    int i, max, min;
    // Initialize max and min with the first element of the array
    max = min = array[0].science;

    for (i = 0; i < size; i++) {
        if (array[i].science > max) {
            max = array[i].science;
        }
        if (array[i].science < min) {
            min = array[i].science;
        }
    }

    printf("the max value of science is %d\t\n", max);
    printf("the min value of science is %d\t\n", min);
    printf("\n");
}

// Function to find the maximum and minimum values of biology scores
void biologymaxmin(CData array[], int size) {
    int i, max, min;
    // Initialize max and min with the first element of the array
    max = min = array[0].biology;

    for (i = 0; i < size; i++) {
        if (array[i].biology > max) {
            max = array[i].biology;
        }
        if (array[i].biology < min) {
            min = array[i].biology;
        }
    }

    printf("the max value of biology is %d\t\n", max);
    printf("the min value of biology is %d\t\n", min);
    printf("\n");
}
