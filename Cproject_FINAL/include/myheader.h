#ifndef ThisHeaderInclusion
#define ThisHeaderInclusion

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <string.h>

struct clientData
{
    int acctNum; /* account number */
    int english;
    int chinese;
    int math;
    int science;
    int biology;
    int total;
    char bloodType;
    double average;
};
typedef struct clientData CData;

void RandomNumber(CData array[], int size);
void display(CData array[], char names[][15], int size);
void chinesemaxmin(CData array[], int size);
void mathmaxmin(CData array[], int size);
void englishmaxmin(CData array[], int size);
void sciencemaxmin(CData array[], int size);
void biologymaxmin(CData array[], int size);
void merge(CData *array, char names[][15], int size);
void sort_totalscore(CData *array, char names[][15], int size);
void writeDataToFile(CData array[], char names[][15], int size);
void HLscore(CData array[], char names[][15], int size);
void calculateSubjectStatistics(CData array[], int size, const char *subject,double *average, double *stdDev);
void printSubjectStatistics(const char *subject, double average, double stdDev);
void findStudentById(CData array[], char names[][15], int size);
#endif