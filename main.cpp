#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_EMPLOYEES 50

// Define a structure to store patient data
typedef struct {
    char name[50];
    int age;
    char gender;
    char symptoms[100];
} Patient;

// Define a structure to store employee data
typedef struct {
    char name[50];
    int age;
    char gender;
    char department[50];
} Employee;

// Initialize arrays to store patient and employee data
Patient patients[MAX_PATIENTS];
Employee employees[MAX_EMPLOYEES];

// Initialize counters for patient and employee data
int num_patients = 0;
int num_employees = 0;

// Define a function to input patient data
void input_patient_data() {
    if (num_patients >= MAX_PATIENTS) {
        printf("Error: maximum number of patients reached\n");
        return;
    }

    Patient patient;
    printf("Enter patient name: ");
    scanf("%s", patient.name);
    printf("Enter patient age: ");
    scanf("%d", &patient.age);
    printf("Enter patient gender (M/F): ");
    scanf(" %c", &patient.gender);
    printf("Enter patient symptoms: ");
    scanf("%s", patient.symptoms);

    patients[num_patients++] = patient;
    printf("Patient data added successfully\n");
}

// Define a function to input employee data
void input_employee_data() {
    if (num_employees >= MAX_EMPLOYEES) {
        printf("Error: maximum number of employees reached\n");
        return;
    }

    Employee employee;
    printf("Enter employee name: ");
    scanf("%s", employee.name);
    printf("Enter employee age: ");
    scanf("%d", &employee.age);
    printf("Enter employee gender (M/F): ");
    scanf(" %c", &employee.gender);
    printf("Enter employee department: ");
    scanf("%s", employee.department);

    employees[num_employees++] = employee;
    printf("Employee data added successfully\n");
}

// Define a function to generate patient reports
void generate_patient_report() {
    if (num_patients == 0) {
        printf("Error: no patient data found\n");
        return;
    }

    printf("Patient report:\n");
    for (int i = 0; i < num_patients; i++) {
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %c\n", patients[i].gender);
        printf("Symptoms: %s\n", patients[i].symptoms);
        printf("--------------------\n");
    }
}

// Define a function to generate employee reports
void generate_employee_report() {
    if (num_employees == 0) {
        printf("Error: no employee data found\n");
        return;
    }

    printf("Employee report:\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Gender: %c\n", employees[i].gender);
        printf("Department: %s\n", employees[i].department);
        printf("--------------------\n");
    }
}

int main() {
    int choice;
    do {
        printf("1. Input patient data\n");
        printf("2. Input employee data\n");
        printf("3. Generate patient report
