#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
#define BUFFSIZE 100
int _tmain(int argc, LPTSTR argv[])
{
	TCHAR buffer[BUFFSIZE] = L"SHRAVANTHI";
	/*STARTUPINFO si;
	PROCESS_INFORMATION pi;
	SECURITY_ATTRIBUTES se;
	se.nLength = sizeof(SECURITY_ATTRIBUTES);
	se.bInheritHandle = TRUE;
	se.lpSecurityDescriptor = NULL;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));*/
	DWORD dwnbw;

	//BOOL ret = CreateProcess(
	//	NULL, argv[1], NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi);
	//if (ret == 0)
	//{
	//	printf("Process2 creation failed, Error = %d\n", GetLastError());
	//}
	HANDLE hFile = (HANDLE)*argv[0];
	printf("HELLO NEW PROCESS\n");

	BOOL ret = WriteFile(hFile, buffer, sizeof(buffer), &dwnbw, NULL);
	if (ret == FALSE)
	{
		_tprintf(_T("Can't write to the file\n"));
		getchar();
		return FALSE;
	}

	getchar();
	return 0;
}