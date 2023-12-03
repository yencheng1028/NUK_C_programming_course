#include "myheader.h"

void RandomNumber(CData array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        array[i].acctNum = i + 1;
        array[i].chinese = rand() % 101;
        array[i].english = rand() % 101;
        array[i].science = rand() % 101;
        array[i].math = rand() % 101;
        array[i].biology = rand() % 101;
        array[i].average = (array[i].chinese + array[i].english + array[i].science + array[i].math + array[i].biology) / 5.0;
        array[i].total = (array[i].chinese + array[i].english + array[i].science + array[i].math + array[i].biology);
        // Generate random blood type
        char blood_types[] = {65, 66, 79};
        int index = rand() % 3;
        array[i].bloodType = blood_types[index];
    }
}

void display( CData array[], char names[][15], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("name=%s\t ID=%d\t blood_type=%c\t chinese=%d\t english=%d\t science=%d\t math=%d\t biology=%d\t total=%d\t average=%2.2lf\n",
               names[i],
               array[i].acctNum,
               array[i].bloodType,
               array[i].chinese,
               array[i].english,
               array[i].science,
               array[i].math,
               array[i].biology,
               array[i].total,
               array[i].average);
    }
    printf("\n");
}