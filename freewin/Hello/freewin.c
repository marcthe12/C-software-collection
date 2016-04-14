#include <windows.h>

int WINAPI
mainCRTStartup(void)
{
	HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteFile(stdout ,"Hello World\n", 12, (DWORD[]){0}, NULL);
	return 0;
}
