# SendTagCharacInfo

`_ZN5CUser17SendTagCharacInfoEv`

`CUser::SendTagCharacInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086903f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086903f8  _ZN5CUser17SendTagCharacInfoEv
#           CUser::SendTagCharacInfo()
# range [0x086903f8, 0x086904ef]
086903f8 +0x00:  push   %ebp
086903f9 +0x01:  mov    %esp,%ebp
086903fb +0x03:  push   %esi
086903fc +0x04:  push   %ebx
086903fd +0x05:  sub    $0x20,%esp
08690400 +0x08:  mov    0x8(%ebp),%eax
08690403 +0x0b:  mov    %eax,(%esp)
08690406 +0x0e:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
0869040b +0x13:  test   %eax,%eax
0869040d +0x15:  sete   %al
08690410 +0x18:  test   %al,%al
08690412 +0x1a:  jne    086904e8 <+0xf0>
08690418 +0x20:  mov    0x8(%ebp),%eax
0869041b +0x23:  mov    %eax,(%esp)
0869041e +0x26:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08690423 +0x2b:  movzbl 0x14bc(%eax),%eax
0869042a +0x32:  xor    $0x1,%eax
0869042d +0x35:  test   %al,%al
0869042f +0x37:  je     08690443 <+0x4b>
08690431 +0x39:  mov    0x8(%ebp),%eax
08690434 +0x3c:  mov    %eax,(%esp)
08690437 +0x3f:  call   0869605e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28b3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28b3
0869043c +0x44:  movb   $0x1,0x14bc(%eax)
08690443 +0x4b:  lea    -0x14(%ebp),%eax
08690446 +0x4e:  mov    %eax,(%esp)
08690449 +0x51:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0869044e +0x56:  lea    -0x14(%ebp),%eax
08690451 +0x59:  mov    %eax,(%esp)
08690454 +0x5c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08690459 +0x61:  movl   $0x19e,0x8(%esp)
08690461 +0x69:  movl   $0x0,0x4(%esp)
08690469 +0x71:  lea    -0x14(%ebp),%eax
0869046c +0x74:  mov    %eax,(%esp)
0869046f +0x77:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08690474 +0x7c:  movl   $0x1,0x4(%esp)
0869047c +0x84:  lea    -0x14(%ebp),%eax
0869047f +0x87:  mov    %eax,(%esp)
08690482 +0x8a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08690487 +0x8f:  lea    -0x14(%ebp),%eax
0869048a +0x92:  mov    %eax,0x4(%esp)
0869048e +0x96:  mov    0x8(%ebp),%eax
08690491 +0x99:  mov    %eax,(%esp)
08690494 +0x9c:  call   08690776 <_ZN5CUser17MakeTagCharacInfoER11PacketGuard>  ; CUser::MakeTagCharacInfo(PacketGuard&)
08690499 +0xa1:  movl   $0x1,0x4(%esp)
086904a1 +0xa9:  lea    -0x14(%ebp),%eax
086904a4 +0xac:  mov    %eax,(%esp)
086904a7 +0xaf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086904ac +0xb4:  lea    -0x14(%ebp),%eax
086904af +0xb7:  mov    %eax,0x4(%esp)
086904b3 +0xbb:  mov    0x8(%ebp),%eax
086904b6 +0xbe:  mov    %eax,(%esp)
086904b9 +0xc1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086904be +0xc6:  jmp    086904db <+0xe3>
086904c0 +0xc8:  mov    %edx,%ebx
086904c2 +0xca:  mov    %eax,%esi
086904c4 +0xcc:  lea    -0x14(%ebp),%eax
086904c7 +0xcf:  mov    %eax,(%esp)
086904ca +0xd2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086904cf +0xd7:  mov    %esi,%eax
086904d1 +0xd9:  mov    %ebx,%edx
086904d3 +0xdb:  mov    %eax,(%esp)
086904d6 +0xde:  call   08ae3750 <_Unwind_Resume>
086904db +0xe3:  lea    -0x14(%ebp),%eax
086904de +0xe6:  mov    %eax,(%esp)
086904e1 +0xe9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086904e6 +0xee:  jmp    086904e9 <+0xf1>
086904e8 +0xf0:  nop
086904e9 +0xf1:  add    $0x20,%esp
086904ec +0xf4:  pop    %ebx
086904ed +0xf5:  pop    %esi
086904ee +0xf6:  pop    %ebp
086904ef +0xf7:  ret
```

## 反编译 C

```c
// CUser::SendTagCharacInfo @ 0x86903f8

/* CUser::SendTagCharacInfo() */

void __thiscall CUser::SendTagCharacInfo(CUser *this)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  iVar1 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
    if (*(char *)(iVar1 + 0x14bc) != '\x01') {
      iVar1 = CUserCharacInfo::getTagCharacW((CUserCharacInfo *)this);
      *(undefined1 *)(iVar1 + 0x14bc) = 1;
    }
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08690454 to 086904bd has its CatchHandler @ 086904c0 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x19e);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    MakeTagCharacInfo(this,local_18);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
