# SendManageLevelUpNoti

`_ZN5CUser21SendManageLevelUpNotiEv`

`CUser::SendManageLevelUpNoti()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690b58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690b58  _ZN5CUser21SendManageLevelUpNotiEv
#           CUser::SendManageLevelUpNoti()
# range [0x08690b58, 0x08690be5]
08690b58 +0x00:  push   %ebp
08690b59 +0x01:  mov    %esp,%ebp
08690b5b +0x03:  push   %esi
08690b5c +0x04:  push   %ebx
08690b5d +0x05:  sub    $0x20,%esp
08690b60 +0x08:  lea    -0x14(%ebp),%eax
08690b63 +0x0b:  mov    %eax,(%esp)
08690b66 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08690b6b +0x13:  lea    -0x14(%ebp),%eax
08690b6e +0x16:  mov    %eax,(%esp)
08690b71 +0x19:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08690b76 +0x1e:  movl   $0x19f,0x8(%esp)
08690b7e +0x26:  movl   $0x0,0x4(%esp)
08690b86 +0x2e:  lea    -0x14(%ebp),%eax
08690b89 +0x31:  mov    %eax,(%esp)
08690b8c +0x34:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08690b91 +0x39:  movl   $0x1,0x4(%esp)
08690b99 +0x41:  lea    -0x14(%ebp),%eax
08690b9c +0x44:  mov    %eax,(%esp)
08690b9f +0x47:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08690ba4 +0x4c:  lea    -0x14(%ebp),%eax
08690ba7 +0x4f:  mov    %eax,0x4(%esp)
08690bab +0x53:  mov    0x8(%ebp),%eax
08690bae +0x56:  mov    %eax,(%esp)
08690bb1 +0x59:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08690bb6 +0x5e:  jmp    08690bd3 <+0x7b>
08690bb8 +0x60:  mov    %edx,%ebx
08690bba +0x62:  mov    %eax,%esi
08690bbc +0x64:  lea    -0x14(%ebp),%eax
08690bbf +0x67:  mov    %eax,(%esp)
08690bc2 +0x6a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08690bc7 +0x6f:  mov    %esi,%eax
08690bc9 +0x71:  mov    %ebx,%edx
08690bcb +0x73:  mov    %eax,(%esp)
08690bce +0x76:  call   08ae3750 <_Unwind_Resume>
08690bd3 +0x7b:  lea    -0x14(%ebp),%eax
08690bd6 +0x7e:  mov    %eax,(%esp)
08690bd9 +0x81:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08690bde +0x86:  add    $0x20,%esp
08690be1 +0x89:  pop    %ebx
08690be2 +0x8a:  pop    %esi
08690be3 +0x8b:  pop    %ebp
08690be4 +0x8c:  ret
08690be5 +0x8d:  nop
```

## 反编译 C

```c
// CUser::SendManageLevelUpNoti @ 0x8690b58

/* CUser::SendManageLevelUpNoti() */

void __thiscall CUser::SendManageLevelUpNoti(CUser *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08690b71 to 08690bb5 has its CatchHandler @ 08690bb8 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x19f);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
