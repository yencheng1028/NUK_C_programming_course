#include "myheader.h"
void writeDataToFile(CData array[], char names[][15], int size) {
    FILE *cfPtr;    

    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        printf("cannot open file\n");
    } else {
        
        for (int i = 0; i < size; i++) {
            fprintf(cfPtr, "name=%s ID=%d blood_type=%c chinese=%d english=%d science=%d math=%d biology=%d total=%d average=%5.2lf\n",
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

        fclose(cfPtr);
    }
}