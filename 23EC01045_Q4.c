#include <stdio.h>

struct Student
{
    int reg_no;
    char name[50];
    char branch[10];
    float cgpa;
};

int linear_search(struct Student arr[], int num)
{
    for(int i = 0; i < 10; i++)
    {
        if(arr[i].reg_no == num)
        {
            return i;
        }
    }
}

void sort(struct Student arr[])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(arr[j].reg_no > arr[j + 1].reg_no)
            {
                struct Student temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main()
{
    struct Student data[10];
    for(int i = 0; i < 10; i++)
    {
        struct Student st;
        printf("\nEnter registration number: ");
        scanf("%d", &st.reg_no);
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", st.name);
        printf("Enter branch: ");
        scanf("%s", st.branch);
        printf("Enter CGPA: ");
        scanf("%f", &st.cgpa);
        data[i] = st;
    }

    int search_reg;
    printf("\nEnter registration number to search: ");
    scanf("%d", &search_reg);

    int index = linear_search(data, search_reg);
    printf("\nName: %s\nBranch: %s\nCGPA: %f\n", data[index].name, data[index].branch, &data[index].cgpa);

    sort(data);

    for(int k = 0; k < 10; k++)
    {
        printf("\nRegistration number: %d\nName: %s\nBranch: %s\nCGPA: %f\n",data[k].reg_no, data[k].name, data[k].branch, &data[k].cgpa);
    }


    

    return 0;
}