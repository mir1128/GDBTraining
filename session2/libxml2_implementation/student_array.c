/*
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct 
{
	char* name;
	int age;
	char* address;
	int id;
}Student;

Student * createStudent();
void destoryStudent(Student* student);
char* randomString();

int main()
{
	srand((unsigned)time(NULL));
	
	Student* students[100] ;
	for (int i = 0; i < 100; ++i) {
		students[i] = createStudent();
	}

	for (int i = 0; i < 100; ++i) {
		destoryStudent(students[i]);
	}
	return 0;
}

Student * createStudent()
{
	Student* student = (Student*)malloc(sizeof(Student));
	student->name = randomString();
	student->age = rand() % 20 + 1;
	student->address = randomString();
	student->id = rand() % 10000 + 1;
	return student;
}

void destoryStudent(Student* student)
{
	free(student->name);
	free(student->address);
	free(student);
}

char* randomString()
{
	int n = rand() % 10 + 1;
	char* buffer = (char*)malloc(n + 1);
	buffer[n] = '\0';

	for (int i = 0; i < n; ++i) {
		buffer[i] = 'a' + rand() % 26;
	}
	return buffer;
}

*/