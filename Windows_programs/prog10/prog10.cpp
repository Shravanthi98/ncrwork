#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
int _tmain(int argc, LPTSTR argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	SECURITY_ATTRIBUTES se;
	se.nLength = sizeof(SECURITY_ATTRIBUTES);
	se.bInheritHandle = TRUE;
	se.lpSecurityDescriptor = NULL;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	for (int i = 0; i < argc; i++)
		_tprintf(_T("ARGV[i] = %s\n"), argv[i]);
	HANDLE hEve = CreateEvent(
		&se, FALSE, FALSE, L"object1");
	if (hEve == INVALID_HANDLE_VALUE)
		printf("Event Creation failed\n");
	BOOL ret = CreateProcess(
		NULL, argv[1], NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi);
	if (ret == 0)
	{
		printf("Process creation failed, Error = %d", GetLastError());
	}

	WaitForSingleObject(pi.hProcess, INFINITE);
	_tprintf(_T("ProcessId : %lu\n"), GetProcessId(pi.hProcess));
	_tprintf(_T("ThreadId : %lu\n"), pi.hThread);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	system("pause");
	return 0;
}