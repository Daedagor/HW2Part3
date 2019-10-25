/*
;Atributes: bp-based frame fuzzy-so

;int_cdecl main(int argc, const char **argv, const char **envp)
public _main
_main proc near

var_19C = dword ptr -19Ch
argc= dword ptr 8
argc= dword ptr 0Ch
argc= dword ptr 10h

push  ebp
mov esp, esp
and esp, 0FFFFFFF0h
sub esp, 1B0h
call ___main
mov dword ptr [esp+1A8h], 7
mov dword ptr [esp+1A4h], 64h
mov dword ptr [esp+1ACh], 0
jmp short loc_401619

loc_401619:
mov eax, [esp+1ACh]
cmp eax, [esp+1A4h]
jl  short loc_4015FC

loc_4015FC:
mov eax, [esp+1ACh]
lea edx, [eax+1]
mov eax, [esp+1ACh]
mov [esp+eax*4+14h], edx
add dword ptr [esp+1ACh], 1

mov eax,[esp+1A8h]
mov [esp+8], eax
mov eax, [esp+1A4h
mov [esp+4], eax
lea eax, [esp+1B0h+var_var_19C]
mov [esp], eax
call  _Z5proc1Piii
mov [esp+4], eax
mov dword ptr [esp], offset aD
call  _printf
mov eax, 0
leave
retn
_main endp

*/
