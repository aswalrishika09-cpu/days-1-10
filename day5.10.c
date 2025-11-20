#include <stdio.h>
int main() {
    int a, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &a);

    
    hours = a / 3600;
    minutes = (a % 3600) / 60;
    seconds = a% 60;

    printf("Time is %d:%d:%d\n", hours, minutes, seconds);

    return 0;

	
}
