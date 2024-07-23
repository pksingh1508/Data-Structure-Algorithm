#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char name[32];
}harry,aman;
    // struct Student harry,aman; 
    // global variable declration

void print()
{
    printf("\n The id and marks of harry is %d , %d ", harry.id, harry.marks);
    printf("The name of the harry is %s ", harry.name);
    printf("\n The id and marks of aman is %d , %d ", aman.id, aman.marks);
}

int main()
{
    harry.id = 1;
    aman.id = 2;

    harry.marks = 133;
    aman.marks = 233;
    strcpy(harry.name, "codewithHarry");

    print();
    // printf("\n The id and marks of harry is %d , %d ", harry.id, harry.marks);
    // printf("\n The id and marks of aman is %d , %d ", aman.id, aman.marks);

    return 0;
}