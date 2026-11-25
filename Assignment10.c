
#include <stdio.h>
#include <time.h>

int main()
{
    int year, month, i;
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    struct tm date = {0};

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        days[1] = 29;
    }

    date.tm_year = year - 1900;
    date.tm_mon = 0;
    date.tm_mday = 1;
    date.tm_hour = 12;

    mktime(&date);

    int startDay = date.tm_wday;

    for (month = 0; month < 12; month++)
    {
        printf("\n\n      %s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (i = 0; i < startDay; i++)
            printf("    ");

        for (i = 1; i <= days[month]; i++)
        {
            printf("%3d ", i);

            if (++startDay == 7)
            {
                startDay = 0;
                printf("\n");
            }
        }

        printf("\n");
    }

    return 0;
}
