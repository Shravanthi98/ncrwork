#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#include<shellapi.h>
#include<stdlib.h>
#define BUFFSIZE 200
int _tmain(int argc, LPTSTR argv[])
{
	TCHAR buffer[BUFFSIZE];
	HANDLE hFile;
	DWORD dwnbr;

	hFile = CreateFile(
		argv[1],
		GENERIC_READ, 0, NULL, OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL, NULL);

	if (INVALID_HANDLE_VALUE == hFile)
	{
		wprintf(L"File doesnt exist, Error no : %d\n", GetLastError());
	}
//	while (1)
//	{
		ZeroMemory(buffer, BUFFSIZE);
		BOOL ret = ReadFile(hFile, buffer, BUFFSIZE, &dwnbr, NULL);
		if (ret == FALSE)
		{
			_tprintf(_T("Can't read the file\n"));
			getchar();
			return FALSE;
		}
	/*	if ((ret == TRUE) && (dwnbr == 0))
		{
			_tprintf(_T("Reached EOF\n"));
			break;
		}
		*/
	//}
	CloseHandle(hFile);
	_tprintf(_T("Text from(%wS) : %S\n"), argv[1], buffer);
	system("pause");
	return 0;
}