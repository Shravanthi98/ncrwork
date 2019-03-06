#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
long global_var;
DWORD WINAPI thread_func1(LPVOID lparam)
{
	global_var++;
	global_var++;
	global_var++;
	global_var++;
	//printf("Final value1 = %d\n ", global_var);
	return 0;
}
DWORD WINAPI thread_func2(LPVOID lparam)
{
	global_var++;
	global_var++;
	global_var++;
	global_var++;
	//printf("Final value2 = %d\n ", global_var);

	return 0;
}
int main()
{
	HANDLE hThread1[2];
	DWORD threadid, threadid1;
	int i = 10;
	while (1)
	{
		global_var = 0;
		hThread1[0] = CreateThread(NULL, 0, thread_func1, NULL, 0, &threadid);
		if (hThread1[0] == NULL)
		{
			printf("Unable to Create thread1\n");
			return 1;
		}
		/*else
			printf("Thread1 created successfully\n");*/

		hThread1[1] = CreateThread(NULL, 0, thread_func2, NULL, 0, &threadid1);
		if (hThread1[1] == NULL)
		{
			printf("Unable to Create thread2\n");
			return 1;
		}
		/*else
			printf("Thread2 created successfully\n");*/

		WaitForMultipleObjects(2, hThread1, TRUE, INFINITE);
		CloseHandle(hThread1[0]);
		CloseHandle(hThread1[1]);

		printf("%ld\n", global_var);
		if (global_var != 8)
			break;


		//i--;
	}

	printf("Final value3 = %d\n ", global_var);
	system("pause");
	return 0;
}