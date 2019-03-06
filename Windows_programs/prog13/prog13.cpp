#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
DWORD WINAPI thread_func(LPVOID lparam)
{
	for (int i = 1; i <=100; i++)
	{
		printf("i = (%d)\n", i);
		Sleep(100);
	}
	return 0;
}
int _tmain()
{
	DWORD threadid;
	HANDLE hThread = CreateThread(NULL, 0, thread_func, NULL, CREATE_SUSPENDED, &threadid);
	if (hThread == NULL)
	{
		printf("Unable to Create a thread\n");
		return 1;
	}
	else
		printf("Thread created successfully\n");
	Sleep(5000);
	ResumeThread(hThread);
	system("pause");
	return 0;
}