# sendReturnUserFirstLogin

`_ZN5CUser24sendReturnUserFirstLoginEv`

`CUser::sendReturnUserFirstLogin()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a9a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a9a4  _ZN5CUser24sendReturnUserFirstLoginEv
#           CUser::sendReturnUserFirstLogin()
# range [0x0868a9a4, 0x0868aa53]
0868a9a4 +0x00:  push   %ebp
0868a9a5 +0x01:  mov    %esp,%ebp
0868a9a7 +0x03:  push   %esi
0868a9a8 +0x04:  push   %ebx
0868a9a9 +0x05:  sub    $0x20,%esp
0868a9ac +0x08:  mov    0x8(%ebp),%eax
0868a9af +0x0b:  mov    %eax,(%esp)
0868a9b2 +0x0e:  call   085bfd66 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12c4>  ; global constructors keyed to CParty::cMember::cMember()+0x12c4
0868a9b7 +0x13:  test   %al,%al
0868a9b9 +0x15:  je     0868a9d1 <+0x2d>
0868a9bb +0x17:  mov    0x8(%ebp),%eax
0868a9be +0x1a:  mov    %eax,(%esp)
0868a9c1 +0x1d:  call   082a6786 <_GLOBAL__I__ZN4CLog5this_E+0x2bad>  ; global constructors keyed to CLog::this_+0x2bad
0868a9c6 +0x22:  test   %al,%al
0868a9c8 +0x24:  je     0868a9d1 <+0x2d>
0868a9ca +0x26:  mov    $0x1,%eax
0868a9cf +0x2b:  jmp    0868a9d6 <+0x32>
0868a9d1 +0x2d:  mov    $0x0,%eax
0868a9d6 +0x32:  test   %al,%al
0868a9d8 +0x34:  je     0868aa4d <+0xa9>
0868a9da +0x36:  lea    -0x14(%ebp),%eax
0868a9dd +0x39:  mov    %eax,(%esp)
0868a9e0 +0x3c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868a9e5 +0x41:  movl   $0x1bc,0x8(%esp)
0868a9ed +0x49:  movl   $0x0,0x4(%esp)
0868a9f5 +0x51:  lea    -0x14(%ebp),%eax
0868a9f8 +0x54:  mov    %eax,(%esp)
0868a9fb +0x57:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868aa00 +0x5c:  movl   $0x1,0x4(%esp)
0868aa08 +0x64:  lea    -0x14(%ebp),%eax
0868aa0b +0x67:  mov    %eax,(%esp)
0868aa0e +0x6a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868aa13 +0x6f:  lea    -0x14(%ebp),%eax
0868aa16 +0x72:  mov    %eax,0x4(%esp)
0868aa1a +0x76:  mov    0x8(%ebp),%eax
0868aa1d +0x79:  mov    %eax,(%esp)
0868aa20 +0x7c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868aa25 +0x81:  jmp    0868aa42 <+0x9e>
0868aa27 +0x83:  mov    %edx,%ebx
0868aa29 +0x85:  mov    %eax,%esi
0868aa2b +0x87:  lea    -0x14(%ebp),%eax
0868aa2e +0x8a:  mov    %eax,(%esp)
0868aa31 +0x8d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868aa36 +0x92:  mov    %esi,%eax
0868aa38 +0x94:  mov    %ebx,%edx
0868aa3a +0x96:  mov    %eax,(%esp)
0868aa3d +0x99:  call   08ae3750 <_Unwind_Resume>
0868aa42 +0x9e:  lea    -0x14(%ebp),%eax
0868aa45 +0xa1:  mov    %eax,(%esp)
0868aa48 +0xa4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868aa4d +0xa9:  add    $0x20,%esp
0868aa50 +0xac:  pop    %ebx
0868aa51 +0xad:  pop    %esi
0868aa52 +0xae:  pop    %ebp
0868aa53 +0xaf:  ret
```

## 反编译 C

```c
// CUser::sendReturnUserFirstLogin @ 0x868a9a4

/* CUser::sendReturnUserFirstLogin() */

void __thiscall CUser::sendReturnUserFirstLogin(CUser *this)

{
  bool bVar1;
  char cVar2;
  PacketGuard local_18 [12];
  
  cVar2 = IsReturnUser(this);
  if (cVar2 != '\0') {
    cVar2 = IsReturnUserFirstLogin(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0868a9d6;
    }
  }
  bVar1 = false;
LAB_0868a9d6:
  if (bVar1) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0868a9fb to 0868aa24 has its CatchHandler @ 0868aa27 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1bc);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
