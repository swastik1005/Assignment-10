#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

struct Time difference(struct Time t1, struct Time t2)
{
    struct Time tdiff;
    int sect1, sect2;
    sect1 = (t1.hours * 3600) + (t1.minutes * 60) + (t1.seconds);
    sect2 = (t2.hours * 3600) + (t2.minutes * 60) + (t2.seconds);
    int sectdiff;
    if(sect1 > sect2)
    {
        sectdiff = sect1 - sect2;
    }
    else
    {
        sectdiff = sect2 - sect1;
    }

    tdiff.hours = sectdiff / 3600;
    tdiff.minutes = (sectdiff % 3600) / 60;
    tdiff.seconds = (sectdiff % 3600) % 60;

    return tdiff;
}

void print_time(struct Time t)
{
    printf("%d hours : %d minutes: %d seconds", t.hours, t.minutes, t.seconds);
}

int main()
{
    struct Time t1, t2;
    printf("Enter hours, minutes and seconds for time 1: ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("\nEnter hours, minutes and seconds for time 2: ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    struct Time t = difference(t1, t2);

    printf("\nTime difference is: \n");

    print_time(t);


    return 0;
}