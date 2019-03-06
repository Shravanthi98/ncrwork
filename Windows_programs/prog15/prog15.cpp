#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
HANDLE hThread1;
DWORD dwExitCode = 0;
DWORD WINAPI thread_func(LPVOID lparam)
{
	for (int i = 1; i <= 5; i++)
	{
		printf("i = (%d)\n", i);
		Sleep(100);
	}
	BOOL ret = TerminateThread(hThread1,dwExitCode);
	return ret;
}
int _tmain()
{
	DWORD threadid;
	hThread1 = CreateThread(NULL, 0, thread_func, NULL, 0, &threadid);
	if (hThread1 == NULL)
	{
		printf("Unable to Create a thread\n");
		return 1;
	}
	else
		printf("Thread created successfully\n");
	WaitForSingleObject(hThread1, 1000);
	printf("Thread has exited\n");
	printf("ExitCode = %d\n", GetExitCodeThread(hThread1, &dwExitCode));
	CloseHandle(hThread1);
	system("pause");
	return 0;
}