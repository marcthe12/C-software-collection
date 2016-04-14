#include <windows.h>

int WINAPI
mainCRTStartup(void)
{
	int x=14;
	HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteFile(stdout ,(char)x, sizeof(x), (DWORD[]){0}, NULL);
	return 0;
}
