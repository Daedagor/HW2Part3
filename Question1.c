/*
push ebp
mov ebp, esp
and esp, 0FFFFFFF0h
sub esp, 20h
call ___main
mov dword ptr [esp+1Ch], 3
mov dword ptr [esp+18h], 5
mov dword ptr [esp+14h], 0
mov eax, [esp+1Ch]
imul eax, [esp+18h]
mov edx, eax
mov eax, [esp+1Ch]
mov ecx, eax
shr ecx, 1Fh
add eax, ecx
sar eax, 1
sub edx, eax
mov eax, edx
mov [esp+14h], eax
mov eax, [esp+14h]
mov [esp+4], eax
mov dword ptr [esp], offset aD ; "%d"
call _printf
mov eax, 0
leave
retn
_main endp
*/

#include <stdio.h>
int main(void){
    // Your code here!
    
}
