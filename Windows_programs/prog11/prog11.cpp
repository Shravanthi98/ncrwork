#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
#define BUFFSIZE 100
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE hFile;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	SECURITY_ATTRIBUTES se, pe;
	se.nLength = sizeof(SECURITY_ATTRIBUTES);
	se.bInheritHandle = TRUE;
	se.lpSecurityDescriptor = NULL;

	// to create process
	pe.nLength = sizeof(SECURITY_ATTRIBUTES);
	pe.bInheritHandle = TRUE;
	pe.lpSecurityDescriptor = NULL;


	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	hFile = CreateFile(
		argv[1],
		GENERIC_WRITE, FILE_SHARE_WRITE , &se, CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL, NULL);

	if (INVALID_HANDLE_VALUE == hFile)
	{
		wprintf(L"File doesnt exist, Error no : %d\n", GetLastError());
	}

	TCHAR data[] = { (TCHAR)hFile };
	BOOL ret = CreateProcess(
		L"C://Shravanthi//ncrwork//Windows_programs//Debug//prog11part2.exe",data, &pe, NULL, TRUE , CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi);
	if (ret == 0)
	{
		printf("Process1 creation failed, Error = %d", GetLastError());
	}
	else
	{
		printf("[DONE] : First process\n");
	}

	system("pause");
	return 0;
}