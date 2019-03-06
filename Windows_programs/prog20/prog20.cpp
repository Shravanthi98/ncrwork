#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
PSRWLOCK lock;
PCONDITION_VARIABLE cv;
int queue1[5] = { -1,-1,-1,-1,-1 };
int read_queue()
{

}
//Reader1
DWORD WINAPI thread_func1(LPVOID lparam)
{
	for (int i = 0; i < 5; i++)
	{
		if (queue1[i] == -1)
		{
			printf("Queue is empty\n");
			SleepConditionVariableSRW(cv, lock, 2000, CONDITION_VARIABLE_LOCKMODE_SHARED);
		}
		else
		{
			AcquireSRWLockShared(lock);
			printf("Reader1 is called\n");
			read_queue();

		}
	}

	return 0;
}
//Reader2
DWORD WINAPI thread_func2(LPVOID lparam)
{
	for (int i = 0; i < 5; i++)
	{
		if (queue1[i] == NULL)
		{
			printf("Queue is empty\n");
			SleepConditionVariableSRW(cv, lock, 2000, CONDITION_VARIABLE_LOCKMODE_SHARED);
		}

		else
		{
			AcquireSRWLockShared(lock);
			printf("Reader2 is called\n");
		}
	}

	return 0;
}
//Writer1
DWORD WINAPI thread_func3(LPVOID lparam)
{
	for (int i = 0; i < 5; i++)
	{
		if (queue1[i] != NULL)
		{
			printf("Queue is full\n");
			SleepConditionVariableSRW(cv, lock, 2000, 0);
			WakeConditionVariable(cv);
		}
		else
		{
			AcquireSRWLockExclusive(lock);
			printf("Writer1 is called\n");
		}
	}
	return 0;
}
//Writer2
DWORD WINAPI thread_func4(LPVOID lparam)
{
	AcquireSRWLockExclusive;
	return 0;
}
//Writer3
DWORD WINAPI thread_func5(LPVOID lparam)
{
	AcquireSRWLockExclusive;
	return 0;
}
//Writer4
DWORD WINAPI thread_func6(LPVOID lparam)
{
	AcquireSRWLockExclusive;
	return 0;
}
int main()
{
	InitializeSRWLock(lock);
	InitializeConditionVariable(cv);
	DWORD threadid[6];
	HANDLE hThread1[6];
	//Reader Threads

	hThread1[0] = CreateThread(NULL, 0, thread_func1, NULL, 0, &threadid[0]);
	if (hThread1[0] == NULL)
	{
		printf("Unable to Create thread1\n");
		return 1;
	}
	else
		printf("Thread1 created successfully\n");


	hThread1[1] = CreateThread(NULL, 0, thread_func2, NULL, 0, &threadid[1]);
	if (hThread1 == NULL)
	{
		printf("Unable to Create thread2\n");
		return 1;
	}
	else
		printf("Thread2 created successfully\n");

	//Writer Threads

	hThread1[2] = CreateThread(NULL, 0, thread_func3, NULL, 0, &threadid[2]);
	if (hThread1[2] == NULL)
	{
		printf("Unable to Create thread3\n");
		return 1;
	}
	else
		printf("Thread3 created successfully\n");

	hThread1[3] = CreateThread(NULL, 0, thread_func4, NULL, 0, &threadid[3]);
	if (hThread1[3] == NULL)
	{
		printf("Unable to Create thread4\n");
		return 1;
	}
	else
		printf("Thread4 created successfully\n");

	hThread1[4] = CreateThread(NULL, 0, thread_func5, NULL, 0, &threadid[4]);
	if (hThread1[4] == NULL)
	{
		printf("Unable to Create thread5\n");
		return 1;
	}
	else
		printf("Thread5 created successfully\n");


	hThread1[5] = CreateThread(NULL, 0, thread_func6, NULL, 0, &threadid[5]);
	if (hThread1[5] == NULL)
	{
		printf("Unable to Create thread6\n");
		return 1;
	}
	else
		printf("Thread6 created successfully\n");



}