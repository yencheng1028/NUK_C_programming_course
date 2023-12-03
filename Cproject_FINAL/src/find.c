#include "myheader.h"

void findStudentById(CData array[], char names[][15], int size) {
    
    int targetId;
    printf("Enter the student ID to find: ");
    scanf("%d", &targetId);

    // Flag Whether it has been found
    int found = 0;
    

    for (int i = 0; i < size; i++) {
        if (array[i].acctNum == targetId) {
            
            printf("===== Found Student =====\n");
            printf("Name=%s\t ID=%d\t Blood Type=%c\t Chinese=%d\t English=%d\t Science=%d\t Math=%d\t Biology=%d\t Total=%d\t Average=%2.2lf\n",
                names[i],
                array[i].acctNum,
                array[i].bloodType,
                array[i].chinese,
                array[i].english,
                array[i].science,
                array[i].math,
                array[i].biology,
                array[i].total,
                array[i].average
            );

            found = 1;
            
            break;       // exit for loop
        }
    }

    
    if (!found) {
        printf("Student with ID %d not found.\n", targetId);
    }
}
