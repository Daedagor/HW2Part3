

/*
.text:00401500 push ebp
.text:00401501 mov ebp, esp
.text:00401503 and esp, 0FFFFFFF0h
.text:00401506 sub esp, 20h
.text:00401509 call ___main
.text:0040150E mov dword ptr [esp+1Ch], 64h
.text:00401516 jmp loc_4015D6
.text:0040151B ; ---------------------------------------------------------------------------
.text:0040151B
.text:0040151B loc_40151B: ; CODE XREF: _main+DE↓j
.text:0040151B mov ecx, [esp+1Ch]
.text:0040151F mov edx, 51EB851Fh
.text:00401524 mov eax, ecx
.text:00401526 imul edx
.text:00401528 sar edx, 5
.text:0040152B mov eax, ecx
.text:0040152D sar eax, 1Fh
.text:00401530 sub edx, eax
.text:00401532 mov eax, edx
.text:00401534 mov [esp+18h], eax
.text:00401538 mov eax, [esp+18h]
.text:0040153C imul edx, eax, -64h
.text:0040153F mov eax, [esp+1Ch]
.text:00401543 lea ecx, [edx+eax]
.text:00401546 mov edx, 66666667h
.text:0040154B mov eax, ecx
.text:0040154D imul edx
.text:0040154F sar edx, 2
.text:00401552 mov eax, ecx
.text:00401554 sar eax, 1Fh
.text:00401557 sub edx, eax
.text:00401559 mov eax, edx
.text:0040155B mov [esp+14h], eax
.text:0040155F mov ecx, [esp+1Ch]
.text:00401563 mov edx, 66666667h
.text:00401568 mov eax, ecx
.text:0040156A imul edx
.text:0040156C sar edx, 2
.text:0040156F mov eax, ecx
.text:00401571 sar eax, 1Fh
.text:00401574 sub edx, eax
.text:00401576 mov eax, edx
.text:00401578 shl eax, 2
.text:0040157B add eax, edx
.text:0040157D add eax, eax
.text:0040157F sub ecx, eax
.text:00401581 mov eax, ecx
.text:00401583 mov [esp+10h], eax
.text:00401587 mov eax, [esp+18h]
.text:0040158B imul eax, [esp+18h]
.text:00401590 imul eax, [esp+18h]
.text:00401595 mov edx, eax
.text:00401597 mov eax, [esp+14h]
.text:0040159B imul eax, [esp+14h]
.text:004015A0 imul eax, [esp+14h]
.text:004015A5 add edx, eax
.text:004015A7 mov eax, [esp+10h]
.text:004015AB imul eax, [esp+10h]
.text:004015B0 imul eax, [esp+10h]
.text:004015B5 add eax, edx
.text:004015B7 cmp eax, [esp+1Ch]
.text:004015BB jnz short loc_4015D1
.text:004015BD mov eax, [esp+1Ch]
.text:004015C1 mov [esp+4], eax
.text:004015C5 mov dword ptr [esp], offset aD ; "%d "
.text:004015CC call _printf
.text:004015D1
.text:004015D1 loc_4015D1: ; CODE XREF: _main+BB↑j
.text:004015D1 add dword ptr [esp+1Ch], 1
.text:004015D6
.text:004015D6 loc_4015D6: ; CODE XREF: _main+16↑j
.text:004015D6 cmp dword ptr [esp+1Ch], 3E7h
.text:004015DE jle loc_40151B
.text:004015E4 mov eax, 0
.text:004015E9 leave
.text:004015EA retn
.text:004015EA _main endp
*/

#include <stdio.h>
int main(void){
    // Your code here!
    
}
