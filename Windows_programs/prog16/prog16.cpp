#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
int _tmain(int argc, LPTSTR argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	HANDLE hProcess;
	DWORD dwpriority = HIGH_PRIORITY_CLASS;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	SetPriorityClass(pi.hProcess, dwpriority);
	BOOL ret = CreateProcess(
		NULL, argv[1], NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi);
	if (ret == 0)
	{
		printf("Process creation failed, Error = %d", GetLastError());
	}
	else
		printf("Process created successfully\n");
	CloseHandle(pi.hProcess);
	system("pause");
	return 0;
}