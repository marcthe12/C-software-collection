#include <windows.h>
#include "Resource.h"

const char g_szClassName[] = "myWindowClass";

// Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
        case WM_LBUTTONDOWN:
            {
                char szFileName[MAX_PATH];
                HINSTANCE hInstance = GetModuleHandle(NULL);
                GetModuleFileName(hInstance, szFileName, MAX_PATH);
                MessageBox(hwnd,szFileName, "About", MB_OK | MB_ICONINFORMATION);
            }
        case WM_CLOSE:
            {
             int msgid = MessageBox(hwnd, "Are you sure you want to close?", "Confirmation", MB_OKCANCEL | MB_ICONINFORMATION);
             if (msgid==1)DestroyWindow(hwnd);
            }
        break;
        case WM_DESTROY:
            PostQuitMessage(0);
        break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    //Registering the Window Class
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = 0;
    wc.lpfnWndProc   = WndProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIcon(0, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(0, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName  = 0;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm       = LoadIcon(0, IDI_APPLICATION);

    if(!RegisterClassEx(&wc))
    {
        MessageBox(0, "Window Registration Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    //Creating the Window
    hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,g_szClassName,"The title of my window",WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,400,200,0,0,hInstance, 0);

    if(hwnd == 0)
    {
        MessageBox(0, "Window Creation Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // The Message Loop
    while(GetMessage(&Msg, 0, 0, 0) > 0)
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return Msg.wParam;
}
