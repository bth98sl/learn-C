/*	1. create a struct 
	2. declare array of struct
	3. assign element in array of struct
	4. print 
*/

#include <stdio.h>

/* #define SIZE 5

typedef struct {
	int x;
	int y;
} Point;

int main (void)
{
	Point arr[SIZE];

	printf("Input element: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Point %d: ", i);
		scanf("%d", &arr[i].x);
		printf("Point %d: ", i);
		scanf("%d",&arr[i].y);
	}
	printf("Output element: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Point %d: (%d, %d)\n", i, arr[i].x, arr[i].y);
	}

	return 0;
} */

#include <string.h>
struct student
{
	char name[50];
	int age;
};

int main (void)
{
	struct student std[3]; //declare an array of struct (array of student)

	strcpy(std[0].name, "Hien");
	std[0].age = 26;

	strcpy(std[1].name, "Toan");
	std[1].age = 27;

	strcpy(std[2].name, "Anata");
	std[2].age = 15;

	//print information about each student in the array
	for (int i = 0; i < 3; i++)
	{
		printf("Student %d: Name - %s, Age - %d\n", i+1, std[i].name, std[i].age);
	}
	
	return 0;
}
