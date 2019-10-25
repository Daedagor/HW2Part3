

/*
.text:00401500 push ebp
.text:00401501 mov ebp, esp
.text:00401503 and esp, 0FFFFFFF0h
.text:00401506 sub esp, 40h
.text:00401509 call ___main
.text:0040150E mov dword ptr [esp+18h], 0Ch
.text:00401516 mov dword ptr [esp+1Ch], 0Fh
.text:0040151E mov dword ptr [esp+20h], 0DDh
.text:00401526 mov dword ptr [esp+24h], 3
.text:0040152E mov dword ptr [esp+28h], 1B0h
.text:00401536 mov dword ptr [esp+2Ch], 36h
.text:0040153E mov dword ptr [esp+30h], 10h
.text:00401546 mov dword ptr [esp+34h], 43h
.text:0040154E mov dword ptr [esp+3Ch], 0
.text:00401556 mov dword ptr [esp+38h], 0
.text:0040155E jmp short loc_40157F
.text:00401560 ; ------------------------------------------------------
.text:00401560
.text:00401560 loc_401560: ; CODE XREF: _main+84↓j
.text:00401560 mov eax, [esp+38h]
.text:00401564 mov eax, [esp+eax*4+18h]
.text:00401568 cmp eax, [esp+3Ch]
.text:0040156C jle short loc_40157A
.text:0040156E mov eax, [esp+38h]
.text:00401572 mov eax, [esp+eax*4+18h]
.text:00401576 mov [esp+3Ch], eax
.text:0040157A
.text:0040157A loc_40157A: ; CODE XREF: _main+6C↑j
.text:0040157A add dword ptr [esp+38h], 1
.text:0040157F
.text:0040157F loc_40157F: ; CODE XREF: _main+5E↑j
.text:0040157F cmp dword ptr [esp+38h], 7
.text:00401584 jle short loc_401560
.text:00401586 mov eax, [esp+3Ch]
.text:0040158A mov [esp+4], eax
.text:0040158E mov dword ptr [esp], offset aD ; "%d"
.text:00401595 call _printf
.text:0040159A mov eax, 0
.text:0040159F leave
.text:004015A0 retn
.text:004015A0 _main endp
*/

/*
This code should loop a few times following pointers and print off the result
*/


#include <stdio.h>
int main(void){
    // Your code here!
    
}
