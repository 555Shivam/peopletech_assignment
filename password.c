#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidUsername(char username[]) {
    int len = strlen(username);

    // Check length
    if (len < 6) {
        return 0;
    }

    // Check first character is alphabet
    if (!isalpha(username[0])) {
        return 0;
    }

    // Check all characters are alphanumeric
    for (int i = 0; i < len; i++) {
        if (!isalnum(username[i])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char username[100];

    printf("Enter username: ");
    scanf("%s", username);

    if (isValidUsername(username)) {
        printf("Valid username.\n");
    } else {
        printf("Invalid username.\n");
    }

    return 0;
}

#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}


// 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int *zero_arr;
    int i;

    // Step 1: Allocate memory using malloc
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Input 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Resize array using realloc
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Step 4: Input 5 more integers
    printf("Enter 5 more integers:\n");
    for (i = 5; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Display all 10 integers
    printf("All 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 6: Free memory
    free(arr);

    // Demonstrate calloc
    zero_arr = (int *)calloc(5, sizeof(int));
    if (zero_arr == NULL) {
        printf("Calloc failed!\n");
        return 1;
    }

    printf("Array initialized with calloc:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", zero_arr[i]); // Should print 0s
    }
    printf("\n");

    free(zero_arr);

    return 0;
}


// 


#include <stdio.h>

int main() {
    float temps[7];
    float sum = 0, max, min;
    int max_day = 0, min_day = 0;

    // Input temperatures
    printf("Enter temperatures for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temps[i]);
        sum += temps[i];

        if (i == 0) {
            max = min = temps[i];
        } else {
            if (temps[i] > max) {
                max = temps[i];
                max_day = i;
            }
            if (temps[i] < min) {
                min = temps[i];
                min_day = i;
            }
        }
    }

    // Output results
    printf("\nAverage Temperature: %.2f\n", sum / 7);
    printf("Highest Temperature: %.2f on Day %d\n", max, max_day + 1);
    printf("Lowest Temperature: %.2f on Day %d\n", min, min_day + 1);

    return 0;
}
// 


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidUsername(char username[]) {
    int len = strlen(username);

    // Check length
    if (len < 6) {
        return 0;
    }

    // Check first character is alphabet
    if (!isalpha(username[0])) {
        return 0;
    }

    // Check all characters are alphanumeric
    for (int i = 0; i < len; i++) {
        if (!isalnum(username[i])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char username[100];

    printf("Enter username: ");
    scanf("%s", username);

    if (isValidUsername(username)) {
        printf("Valid username.\n");
    } else {
        printf("Invalid username.\n");
    }

    return 0;
}
