

// #include <stdio.h>

// int main() {
//     float temps[4];
//     float sum = 0;
    

    
//     printf("Enter temperatures :\n");
//     for (int i = 0; i < 4; i++) {
//         printf("cabin %d: ", i + 1);
//         scanf("%f", &temps[i]);
//         sum += temps[i];

        
//         }
//         float avg=sum/4;
    
//     printf("\nAverage Temperature: %.2f\n", avg);

//     if (avg == 23.75){
//         printf("cooling system:OFF");
//     }
   

//     return 0;
// }

#include <stdio.h> 
#include <stdlib.h> 
 
#define NUM_SENSORS 4 
 
float calculateAverage(float *temps) 
{ 
    float sum = 0; 
    for (int i = 0; i <= NUM_SENSORS; i++) 
        sum += temps[i]; 
    return sum / NUM_SENSORS; 
} 
 
int main() 
{ 
    float *temps; 
    temps = malloc(NUM_SENSORS * sizeof(float)); 
 
    printf("Enter temperatures from 4 cabin sensors:\n"); 
    for (int i = 0; i < NUM_SENSORS; i++) 
        scanf("%f", &temps[i]); 
 
    float avg = calculateAverage(temps); 
    printf("\nAverage Cabin Temperature: %.2f°C\n", avg); 
 
    if (avg > 25) 
        printf("Cooling System: ON\n"); 
    else 
        printf("Cooling System: OFF\n"); 
 
    return 0; 
} 
