#include <stdio.h>

int main() {
    int hours;
    float d1, d2, d3, d4, d5, totalDistance, avgSpeed;
    
    printf("Enter number of hours traveled (1 to 5): ");
    scanf("%d", &hours);
    printf("Enter distance for hour 1: ");
    scanf("%f", &d1);
    printf("Enter distance for hour 2: ");
    scanf("%f", &d2);
    printf("Enter distance for hour 3: ");
    scanf("%f", &d3);
    printf("Enter distance for hour 4: ");
    scanf("%f", &d4);
    printf("Enter distance for hour 5: ");
    scanf("%f", &d5);

    totalDistance = d1 + d2 + d3 + d4 + d5;
	avgSpeed = totalDistance / hours;

    printf("\nTotal Distance: %.2f miles\n", totalDistance);
    printf("Average Speed: %.2f miles/hour\n", avgSpeed);

    return 0;
}