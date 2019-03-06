#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
int _tmain(int argc, LPTSTR argv[])
{
	STARTUPINFO si,si1;
	PROCESS_INFORMATION pi,pi1;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	ZeroMemory(&si1, sizeof(si1));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi1, sizeof(pi1));
	for (int i = 0; i < argc; i++)
		_tprintf(_T("ARGV[i] = %s\n"), argv[i]);
	BOOL ret = CreateProcess(
		NULL,argv[1],NULL, NULL,FALSE, 0, NULL, NULL,&si, &pi);
	if (ret == 0)
	{
		printf("Process creation failed, Error = %d", GetLastError());
	}
	
	WaitForSingleObject(pi.hProcess, INFINITE);
	_tprintf(_T("ProcessId : %lu\n"), GetProcessId(pi.hProcess));
	_tprintf(_T("ThreadId : %lu\n"), pi.hThread);
	ret = CreateProcess(
		NULL, argv[2], NULL, NULL, FALSE, 0, NULL, NULL, &si1, &pi1);
	if (ret == 0)
	{
		printf("Process creation failed, Error = %d", GetLastError());
	}
	_tprintf(_T("ProcessId : %lu\n"), GetProcessId(pi1.hProcess));
	_tprintf(_T("ThreadId : %lu\n"), pi1.hThread);
	WaitForSingleObject(pi1.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	CloseHandle(pi1.hProcess);
	CloseHandle(pi1.hThread);
	system("pause");
	return 0;
}