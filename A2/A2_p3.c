/* 
    CH-230-A
    A2_p3
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include<stdio.h>

int main (){

    int week, day, hour;
    int TotalHours, HoursWeek, HoursDay;

    printf ("Enter number of weeks, days and hours:\n");
    scanf ("%d %d %d", &week, &day, &hour);

    HoursDay = 24 * day;
         //24 Hours in a day
    HoursWeek = 168 * week; 
        //168 hours in a week
    TotalHours = HoursDay + HoursWeek + hour;
        
    printf ("Total number of hours = %d\n", TotalHours);

    return 0;
}