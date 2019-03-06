#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
volatile LONG global_var;
CRITICAL_SECTION global_cs;
DWORD WINAPI thread_func1(LPVOID lparam)
{
	EnterCriticalSection(&global_cs);
	global_var++;
	printf("Final value1 = %d ", global_var);
	return 0;
	LeaveCriticalSection(&global_cs);
}
DWORD WINAPI thread_func2(LPVOID lparam)
{
	EnterCriticalSection(&global_cs);
	global_var++;
	printf("Final value2 = %d ", global_var);
	return 0;
	LeaveCriticalSection(&global_cs);
}
int main()
{
	InitializeCriticalSection(&global_cs);
	HANDLE hThread1 = NULL, hThread2 = NULL;
	DWORD threadid, threadid1;
	hThread1 = CreateThread(NULL, 0, thread_func1, NULL, 0, &threadid);
	if (hThread1 == NULL)
	{
		printf("Unable to Create thread1\n");
		return 1;
	}
	else
		printf("Thread1 created successfully\n");

	hThread2 = CreateThread(NULL, 0, thread_func2, NULL, 0, &threadid1);
	if (hThread2 == NULL)
	{
		printf("Unable to Create thread2\n");
		return 1;
	}
	else
		printf("Thread2 created successfully\n");
	printf("Final value3 = %d ", global_var);

	CloseHandle(hThread1);
	CloseHandle(hThread2);
	system("pause");
	DeleteCriticalSection(&global_cs);
	return 0;
}