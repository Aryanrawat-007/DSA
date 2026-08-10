#include <stdio.h>

int main() {

    typedef struct DOB {
        int d;
        char m[10];
        int y;
    } B;

    typedef struct DOA {
        int d;
        char m[10];
        int year;
    } A;

    typedef struct student {
        int rollno;
        char name[20];
        A A;   // Admission
        B B;   // Birth
    } S;

    S s;

    printf("Enter student roll no:\n");
    scanf("%d", &s.rollno);

    printf("Enter student name:\n");
    scanf("%s", s.name);

    printf("Enter student date of birth (d m y):\n");
    scanf("%d %s %d", &s.B.d, s.B.m, &s.B.y);

    printf("Enter student date of admission (d m y):\n");
    scanf("%d %s %d", &s.A.d, s.A.m, &s.A.year);

    return 0;
}