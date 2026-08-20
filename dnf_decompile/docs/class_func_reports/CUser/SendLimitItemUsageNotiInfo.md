# SendLimitItemUsageNotiInfo

`_ZN5CUser26SendLimitItemUsageNotiInfoEiii`

`CUser::SendLimitItemUsageNotiInfo(int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688f02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688f02  _ZN5CUser26SendLimitItemUsageNotiInfoEiii
#           CUser::SendLimitItemUsageNotiInfo(int, int, int)
# range [0x08688f02, 0x08688fb9]
08688f02 +0x00:  push   %ebp
08688f03 +0x01:  mov    %esp,%ebp
08688f05 +0x03:  push   %esi
08688f06 +0x04:  push   %ebx
08688f07 +0x05:  sub    $0x20,%esp
08688f0a +0x08:  lea    -0x14(%ebp),%eax
08688f0d +0x0b:  mov    %eax,(%esp)
08688f10 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08688f15 +0x13:  movl   $0x11f,0x8(%esp)
08688f1d +0x1b:  movl   $0x0,0x4(%esp)
08688f25 +0x23:  lea    -0x14(%ebp),%eax
08688f28 +0x26:  mov    %eax,(%esp)
08688f2b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08688f30 +0x2e:  mov    0xc(%ebp),%eax
08688f33 +0x31:  mov    %eax,0x4(%esp)
08688f37 +0x35:  lea    -0x14(%ebp),%eax
08688f3a +0x38:  mov    %eax,(%esp)
08688f3d +0x3b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08688f42 +0x40:  mov    0x10(%ebp),%eax
08688f45 +0x43:  mov    %eax,0x4(%esp)
08688f49 +0x47:  lea    -0x14(%ebp),%eax
08688f4c +0x4a:  mov    %eax,(%esp)
08688f4f +0x4d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08688f54 +0x52:  mov    0x14(%ebp),%eax
08688f57 +0x55:  mov    %eax,0x4(%esp)
08688f5b +0x59:  lea    -0x14(%ebp),%eax
08688f5e +0x5c:  mov    %eax,(%esp)
08688f61 +0x5f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08688f66 +0x64:  movl   $0x1,0x4(%esp)
08688f6e +0x6c:  lea    -0x14(%ebp),%eax
08688f71 +0x6f:  mov    %eax,(%esp)
08688f74 +0x72:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08688f79 +0x77:  lea    -0x14(%ebp),%eax
08688f7c +0x7a:  mov    %eax,0x4(%esp)
08688f80 +0x7e:  mov    0x8(%ebp),%eax
08688f83 +0x81:  mov    %eax,(%esp)
08688f86 +0x84:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08688f8b +0x89:  jmp    08688fa8 <+0xa6>
08688f8d +0x8b:  mov    %edx,%ebx
08688f8f +0x8d:  mov    %eax,%esi
08688f91 +0x8f:  lea    -0x14(%ebp),%eax
08688f94 +0x92:  mov    %eax,(%esp)
08688f97 +0x95:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08688f9c +0x9a:  mov    %esi,%eax
08688f9e +0x9c:  mov    %ebx,%edx
08688fa0 +0x9e:  mov    %eax,(%esp)
08688fa3 +0xa1:  call   08ae3750 <_Unwind_Resume>
08688fa8 +0xa6:  lea    -0x14(%ebp),%eax
08688fab +0xa9:  mov    %eax,(%esp)
08688fae +0xac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08688fb3 +0xb1:  add    $0x20,%esp
08688fb6 +0xb4:  pop    %ebx
08688fb7 +0xb5:  pop    %esi
08688fb8 +0xb6:  pop    %ebp
08688fb9 +0xb7:  ret
```

## 反编译 C

```c
// CUser::SendLimitItemUsageNotiInfo @ 0x8688f02

/* CUser::SendLimitItemUsageNotiInfo(int, int, int) */

void __thiscall CUser::SendLimitItemUsageNotiInfo(CUser *this,int param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08688f2b to 08688f8a has its CatchHandler @ 08688f8d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x11f);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
