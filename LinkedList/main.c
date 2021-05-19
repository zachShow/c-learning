#include "student.h";

int main()
{
	PStudent head = NULL;
	PStudent tail = NULL;
	
	sortInsert(&head, &tail, 1);
	sortInsert(&head, &tail, 2);
	sortInsert(&head, &tail, 9);
	sortInsert(&head, &tail, 4);
	sortInsert(&head, &tail, 2);
	sortInsert(&head, &tail, 6);
	sortInsert(&head, &tail, 7);
	sortInsert(&head, &tail, 8);

	deleteStudent(&head, &tail, 2);

	printStudent(head);
}