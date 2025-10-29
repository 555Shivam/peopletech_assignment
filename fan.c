
#include <stdio.h> 
#include <stdlib.h> 
 
#define NUM_SENSORS 4 
 
float calculateAverage(float *temps) 
{ 
    float sum = 0; 
    for (int i = 0; i <= NUM_SENSORS; i++) 
        sum += temps[i]; 
    //  printf("%d",sum);
    return sum / NUM_SENSORS; 
} 
 
int main() 
{ 
    float *temps; 
    temps = malloc(NUM_SENSORS * sizeof(float)); 
 
    printf("Enter 4 temperatures readings:\n"); 
    for (int i = 0; i < NUM_SENSORS; i++) 
        scanf("%f", &temps[i]); 
 
    float avg = calculateAverage(temps); 
    printf("\nAverage  Temperature: %.2f°C\n", avg); 
 
    if (avg <= 22) {
        printf("Fan Speed: Low\n"); }
    else if(22< avg <=28){
        printf("Fan Speed: Medium\n"); }
    else{
        printf("Fan Speed: High");
    }
    free(temps);
    return 0; 
    
} 
