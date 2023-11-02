#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    int age;
}store;

int main()
{
    struct Student data[5];
    for(int i = 0; i < 5; i++)
    {
        struct Student st;
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", st.name);
        printf("\nEnter age of student: ");
        scanf("%d", &st.age);
        st.roll_no = i + 1;
        data[i] = st;
    }

    printf("\nRoll number: %d\nName: %s\nAge: %d", data[1].roll_no, data[1].name, data[1].age);
    return 0;
}