# SendMoneyFullReason

`_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm`

`CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c844` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c844  _ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm
#           CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
# range [0x0867c844, 0x0867c8f9]
0867c844 +0x00:  push   %ebp
0867c845 +0x01:  mov    %esp,%ebp
0867c847 +0x03:  push   %esi
0867c848 +0x04:  push   %ebx
0867c849 +0x05:  sub    $0x20,%esp
0867c84c +0x08:  lea    -0x14(%ebp),%eax
0867c84f +0x0b:  mov    %eax,(%esp)
0867c852 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867c857 +0x13:  movl   $0x33,0x8(%esp)
0867c85f +0x1b:  movl   $0x0,0x4(%esp)
0867c867 +0x23:  lea    -0x14(%ebp),%eax
0867c86a +0x26:  mov    %eax,(%esp)
0867c86d +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867c872 +0x2e:  mov    0xc(%ebp),%eax
0867c875 +0x31:  mov    %eax,0x4(%esp)
0867c879 +0x35:  lea    -0x14(%ebp),%eax
0867c87c +0x38:  mov    %eax,(%esp)
0867c87f +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c884 +0x40:  mov    0x10(%ebp),%eax
0867c887 +0x43:  mov    %eax,0x4(%esp)
0867c88b +0x47:  lea    -0x14(%ebp),%eax
0867c88e +0x4a:  mov    %eax,(%esp)
0867c891 +0x4d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c896 +0x52:  mov    0x14(%ebp),%eax
0867c899 +0x55:  mov    %eax,0x4(%esp)
0867c89d +0x59:  lea    -0x14(%ebp),%eax
0867c8a0 +0x5c:  mov    %eax,(%esp)
0867c8a3 +0x5f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867c8a8 +0x64:  movl   $0x1,0x4(%esp)
0867c8b0 +0x6c:  lea    -0x14(%ebp),%eax
0867c8b3 +0x6f:  mov    %eax,(%esp)
0867c8b6 +0x72:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c8bb +0x77:  lea    -0x14(%ebp),%eax
0867c8be +0x7a:  mov    %eax,0x4(%esp)
0867c8c2 +0x7e:  mov    0x8(%ebp),%eax
0867c8c5 +0x81:  mov    %eax,(%esp)
0867c8c8 +0x84:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867c8cd +0x89:  mov    %eax,%ebx
0867c8cf +0x8b:  lea    -0x14(%ebp),%eax
0867c8d2 +0x8e:  mov    %eax,(%esp)
0867c8d5 +0x91:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c8da +0x96:  mov    %ebx,%eax
0867c8dc +0x98:  add    $0x20,%esp
0867c8df +0x9b:  pop    %ebx
0867c8e0 +0x9c:  pop    %esi
0867c8e1 +0x9d:  pop    %ebp
0867c8e2 +0x9e:  ret
0867c8e3 +0x9f:  mov    %edx,%ebx
0867c8e5 +0xa1:  mov    %eax,%esi
0867c8e7 +0xa3:  lea    -0x14(%ebp),%eax
0867c8ea +0xa6:  mov    %eax,(%esp)
0867c8ed +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c8f2 +0xae:  mov    %esi,%eax
0867c8f4 +0xb0:  mov    %ebx,%edx
0867c8f6 +0xb2:  mov    %eax,(%esp)
0867c8f9 +0xb5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::SendMoneyFullReason @ 0x867c844

/* CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long) */

undefined4 __thiscall CUser::SendMoneyFullReason(CUser *this,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867c86d to 0867c8cc has its CatchHandler @ 0867c8e3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x33);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  uVar1 = Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
