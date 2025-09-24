// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total_sec , hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_sec);

    // Convert the seconds into hours, minutes, and seconds
    hours = total_sec / 3600;
    minutes = (total_sec % 3600) / 60;
    seconds = total_sec % 60;

    // Time in HH:MM:SS format
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}