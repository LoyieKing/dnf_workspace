# sendCharacLinkMessage

`_ZN5CUser21sendCharacLinkMessageEv`

`CUser::sendCharacLinkMessage()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086529ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086529ca  _ZN5CUser21sendCharacLinkMessageEv
#           CUser::sendCharacLinkMessage()
# range [0x086529ca, 0x08652a57]
086529ca +0x00:  push   %ebp
086529cb +0x01:  mov    %esp,%ebp
086529cd +0x03:  push   %esi
086529ce +0x04:  push   %ebx
086529cf +0x05:  sub    $0x20,%esp
086529d2 +0x08:  lea    -0x14(%ebp),%eax
086529d5 +0x0b:  mov    %eax,(%esp)
086529d8 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086529dd +0x13:  lea    -0x14(%ebp),%eax
086529e0 +0x16:  mov    %eax,(%esp)
086529e3 +0x19:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086529e8 +0x1e:  movl   $0x122,0x8(%esp)
086529f0 +0x26:  movl   $0x0,0x4(%esp)
086529f8 +0x2e:  lea    -0x14(%ebp),%eax
086529fb +0x31:  mov    %eax,(%esp)
086529fe +0x34:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08652a03 +0x39:  movl   $0x1,0x4(%esp)
08652a0b +0x41:  lea    -0x14(%ebp),%eax
08652a0e +0x44:  mov    %eax,(%esp)
08652a11 +0x47:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08652a16 +0x4c:  lea    -0x14(%ebp),%eax
08652a19 +0x4f:  mov    %eax,0x4(%esp)
08652a1d +0x53:  mov    0x8(%ebp),%eax
08652a20 +0x56:  mov    %eax,(%esp)
08652a23 +0x59:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08652a28 +0x5e:  jmp    08652a45 <+0x7b>
08652a2a +0x60:  mov    %edx,%ebx
08652a2c +0x62:  mov    %eax,%esi
08652a2e +0x64:  lea    -0x14(%ebp),%eax
08652a31 +0x67:  mov    %eax,(%esp)
08652a34 +0x6a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08652a39 +0x6f:  mov    %esi,%eax
08652a3b +0x71:  mov    %ebx,%edx
08652a3d +0x73:  mov    %eax,(%esp)
08652a40 +0x76:  call   08ae3750 <_Unwind_Resume>
08652a45 +0x7b:  lea    -0x14(%ebp),%eax
08652a48 +0x7e:  mov    %eax,(%esp)
08652a4b +0x81:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08652a50 +0x86:  add    $0x20,%esp
08652a53 +0x89:  pop    %ebx
08652a54 +0x8a:  pop    %esi
08652a55 +0x8b:  pop    %ebp
08652a56 +0x8c:  ret
08652a57 +0x8d:  nop
```

## 反编译 C

```c
// CUser::sendCharacLinkMessage @ 0x86529ca

/* CUser::sendCharacLinkMessage() */

void __thiscall CUser::sendCharacLinkMessage(CUser *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086529e3 to 08652a27 has its CatchHandler @ 08652a2a */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x122);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
