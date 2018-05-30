#include <stdio.h>
#include <string.h>

struct Student {
	char firstName[20];
	char lastName[20];
	int age;
	int studentID;
};

void printStudent(struct Student* student) {
	printf("First Name: %s\n", student->firstName);
	printf("Last Name: %s\n", student->lastName);
	printf("Age: %d\n", student->age);
	printf("Student ID: %d\n", student->studentID);
}


int main() {
	arr students[];

	struct Student newStudent;

	while (1) {
	  addStudent();
	  char input[256]; 

        printf("Input student first name: \n");

        strcat(student.firstName, fgets(input, 256, stdin));

        printf("Input student last name: \n");

        strcat(student.lastName, fgets(input, 256, stdin));

        printf("Input student age: \n");

        student.age = fgets(input, 256, stdin);

        printf("Input student ID: \n");

        student.studentID = fgets(input, 256, stdin);

  }
}
