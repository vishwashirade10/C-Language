#include <stdio.h>
#include <string.h>

// Structure: collection of primitive data members
typedef struct {
    int s_id; // member
    char s_name[20]; // member
    double s_marks; // member
} Stud;

int main() {
    FILE *fptr = fopen("stud.txt", "w");

    if (fptr != NULL) {
        printf("File Exists \n");
    } else {
        printf("File Does Not Exist\n");
        return 1;
    }

    Stud s1;
    s1.s_id = 101;
    strcpy(s1.s_name, "abc");
    s1.s_marks = 78.00;

    printf("id=%d\n", s1.s_id);
    printf("name=%s\n", s1.s_name);
    printf("marks=%lf\n", s1.s_marks);

    Stud arr[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter stud_id: ");
        scanf("%d", &arr[i].s_id);
        printf("Enter stud_name: ");
        scanf("%s", arr[i].s_name);
        printf("Enter stud_marks: ");
        scanf("%lf", &arr[i].s_marks);
    }

    for (int i = 0; i < 2; i++) {
        fprintf(fptr, " %d\n %s\n %lf\n", arr[i].s_id, arr[i].s_name, arr[i].s_marks);
    }
    fclose(fptr);

    return 0;
}
