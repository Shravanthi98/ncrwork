#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
//main function
int main()
{
	SECURITY_ATTRIBUTES se;
	se.bInheritHandle = TRUE;
	se.lpSecurityDescriptor = NULL;
	se.nLength = sizeof(se);
	//creating an event
	HANDLE hEve = CreateEvent(
		&se, FALSE, FALSE, L"object1");
	//checking whether an event is created or not
	if (hEve == INVALID_HANDLE_VALUE)
		printf("Event Creation failed\n");
	else
		printf("Event created successfully\n");
	//closing the handle
	CloseHandle(hEve);

	getchar();
	return 0;
}