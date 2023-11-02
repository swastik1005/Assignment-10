#include <stdio.h>
#include <string.h>

struct Student
{
    char name[30];
    int marks[5];
};

int main()
{
    int n;
    printf("Enter number of entries: ");
    scanf("%d", &n);
    struct Student data[n];
    for(int i = 0; i < n; i++)
    {
        struct Student st;
        printf("\n Enter name of student %d: ", i + 1);
        scanf("%s", st.name);
        for(int j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &st.marks[j]);
        }

        data[i] = st;
    }

    char search[50];
    printf("Enter name of student to search the database: ");
    scanf("%s", search);
    int sum = 0;
    for(int i= 0;i< n;i++)
    {
        if(strcmp(data[i].name, search) == 0)
        {
            
            for(int l = 0; l < 5; l++)
            {
                sum += data[i].marks[l];
            }
            break;
        }
    }

    float avg = sum / 5.0;

    printf("\nTotal marks = %d\nAverage marks = %f", sum, avg);
    return 0;
}