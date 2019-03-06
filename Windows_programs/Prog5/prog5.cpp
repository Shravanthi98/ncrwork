#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
#define BUFFSIZE 100
int _tmain(int argc, LPTSTR argv[])
{
	TCHAR buffer[BUFFSIZE] = L"ABCDEF";
	HANDLE hFile;
	DWORD dwnbw;

	hFile = CreateFile(
		argv[1],
		GENERIC_WRITE, 0, NULL, CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL, NULL);

	if (INVALID_HANDLE_VALUE == hFile)
	{
		wprintf(L"File doesnt exist, Error no : %d\n", GetLastError());
	}
	//while (1)
	//{
		BOOL ret = WriteFile(hFile, buffer, sizeof(buffer), &dwnbw, NULL);
		if (ret == FALSE)
		{
			_tprintf(_T("Can't write to the file\n"));
			return FALSE;
		}
	/*if ((ret == TRUE) && (dwnbw == 0))
	{
	_tprintf(_T("Reached EOF\n"));
	break;
	}
	}*/
	CloseHandle(hFile);
	system("pause");
	return 0;
}