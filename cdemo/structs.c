#include <stdio.h>
#include <string.h>

struct Student {
	char firstName[20];
	char lastName[20];
	char age[1];
	char studentID[1];
};

void printStudent(struct Student* student) {
	printf("First Name: %s\n", student->firstName);
	printf("Last Name: %s\n", student->lastName);
	printf("Age: %d\n", student->age);
	printf("Student ID: %d\n", student->studentID);
}


int main() {

	struct Student students[256];
	char done[4] = "done";
	char checkDone[4];
	int index = 0;

	while (1) {

	  struct Student newStudent;

	  char input[256];

	  printf("Input student first name: \n");
	  fgets(input, 256, stdin);
	  strcat(newStudent.firstName, input);

	  printf("Input student last name: \n");
	  fgets(input, 256, stdin);
	  strcat(newStudent.lastName, input);

	  printf("Input student age: \n");
	  fgets(input, 256, stdin);
	  strcat(newStudent.age, input);

	  printf("Input student ID: \n");
	  fgets(input, 256, stdin);
	  strcat(newStudent.studentID, input);

	  printf("If you are done, type 'done'. If not, press enter.\n");
	  fgets(checkDone, 4, stdin);

	    if(strcmp(checkDone, done) == 1) {
		continue;
	    }

	  students[index] = newStudent;
	  index++;

	}

	for (int i = 0; i >= index; i++) {
	  printStudent(&students[i]);
	}
}
