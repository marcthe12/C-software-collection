; Example of making 32-bit PE program as raw code and data

format PE Console
entry start

section '.text' code readable executable

start:

	sub     esp, 76
	mov     eax, DWORD [_message]
	mov     DWORD [esp], -11
	mov     DWORD [esp+49], eax
	mov     eax, DWORD [_message+4]
	mov     DWORD [esp+53], eax
	mov     eax, DWORD [_message+8]
	mov     DWORD [esp+57], eax
	movzx   eax, WORD [_message+12]
	mov     WORD [esp+61], ax
	movzx   eax, BYTE [_message+14]
	mov     BYTE [esp+63], al
	call    [GetStdHandle]
	sub     esp, 4
	lea     edx, [esp+44]
	mov     DWORD [esp+44], 0
	mov     DWORD [esp+16], 0
	mov     DWORD [esp+8], 15
	mov     DWORD [esp], eax
	mov     DWORD [esp+12], edx
	lea     edx, [esp+49]
	mov     DWORD [esp+4], edx
	call    [WriteFile]

section '.data' data readable writeable

	_message db 'Hello World!',0

section '.idata' import data readable writeable

 	dd 0,0,0,RVA kernel_name,RVA kernel_table
 	dd 0,0,0,0,0

 kernel_table:
	GetStdHandle dd RVA _GetStdHandle
		dd 0
	WriteFile dd RVA _WriteFile
 		dd 0

 kernel_name db 'KERNEL32.DLL',0

	_GetStdHandle dw 0
		db 'GetStdHandle',0
	_Writefile dw 0
		db 'Writefile',0   

section '.reloc' fixups data readable discardable	; needed for Win32s
