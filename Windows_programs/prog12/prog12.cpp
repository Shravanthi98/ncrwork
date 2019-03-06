#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
DWORD WINAPI thread_func(LPVOID lparam)
{
	for (int i = 0; i < 10; i++)
	{
		printf("i = (%d)\n", i);
		Sleep(1000);
	}
	return 0;
}
int _tmain()
{
	DWORD threadid;
	HANDLE hThread = CreateThread(NULL, 0, thread_func, NULL, 0, &threadid);
	if (hThread == NULL)
	{
		printf("Unable to Create a thread\n");
		return 1;
	}
	else
		printf("Thread created successfully\n");
	CloseHandle(hThread);
	system("pause");
	return 0;
}