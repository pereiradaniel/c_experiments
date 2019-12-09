// Passing a structure to a function
// pass_by_value.c
#include <stdio.h>

// Declare structs
struct Student
{
    int no;
    int no_grades_filled;
    float grade[4];
};
    //  Notes:
    //  The compiler needs this declaration to precede the prototype for display()


// Function prototypes
void set(struct Student st);
void display(const struct Student s);  // pass by value 
    // Notes:
    // The compiler passes Objects of struct type by value.


// Main function
int main(void)
{
    // Declare vars
    struct Student harry = { 975, 2, {50.0f, 50.0f}};

    set(harry);  // Data in harry is not changed!
    display(harry);
}


// Function definitions
void set(struct Student st)
{
    struct Student harry = {306, 2, {78.9, 91.6}};
    
    st = harry;
}

void display(const struct Student st)
{
    int i;
    printf("Grades for %d\n", st.no); 
    for (i = 0; i < st.no_grades_filled; i++) {
            printf("%.1f\n", st.grade[i]); 
    };
}