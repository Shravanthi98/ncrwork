#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
DWORD WINAPI thread_func(LPVOID lparam)
{
	for (int i = 1; i <= 5; i++)
	{
		printf("i = (%d)\n", i);
		Sleep(100);
	}
	return 0;
}
int _tmain(int argc, LPTSTR argv[])
{
	printf("Entered program 2\n");
	HANDLE hThread1;
	DWORD threadid;
	int priority1 = 4;
	hThread1 = CreateThread(NULL, 0, thread_func, NULL, 0, &threadid);
	if (hThread1 == NULL)
	{
		printf("Unable to Create a thread\n");
		return 1;
	}
	else
		printf("Thread created successfully\n");
	SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);
	SetThreadPriority(hThread1, -2);
	CloseHandle(hThread1);
	system("pause");
	return 0;
}