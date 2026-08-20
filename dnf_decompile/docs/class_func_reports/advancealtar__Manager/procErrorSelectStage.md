# procErrorSelectStage

`_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR`

`advancealtar::Manager::procErrorSelectStage(CUser*, ENUM_ERROR)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x081309f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081309f0  _ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR
#           advancealtar::Manager::procErrorSelectStage(CUser*, ENUM_ERROR)
# range [0x081309f0, 0x08130ab1]
081309f0 +0x00:  push   %ebp
081309f1 +0x01:  mov    %esp,%ebp
081309f3 +0x03:  push   %esi
081309f4 +0x04:  push   %ebx
081309f5 +0x05:  sub    $0x20,%esp
081309f8 +0x08:  cmpl   $0x0,0x8(%ebp)
081309fc +0x0c:  je     08130aa6 <+0xb6>
08130a02 +0x12:  cmpl   $0x0,0xc(%ebp)
08130a06 +0x16:  je     08130aa9 <+0xb9>
08130a0c +0x1c:  lea    -0x14(%ebp),%eax
08130a0f +0x1f:  mov    %eax,(%esp)
08130a12 +0x22:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08130a17 +0x27:  movl   $0x10,0x8(%esp)
08130a1f +0x2f:  movl   $0x1,0x4(%esp)
08130a27 +0x37:  lea    -0x14(%ebp),%eax
08130a2a +0x3a:  mov    %eax,(%esp)
08130a2d +0x3d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08130a32 +0x42:  movl   $0x0,0x4(%esp)
08130a3a +0x4a:  lea    -0x14(%ebp),%eax
08130a3d +0x4d:  mov    %eax,(%esp)
08130a40 +0x50:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08130a45 +0x55:  mov    0xc(%ebp),%eax
08130a48 +0x58:  mov    %eax,0x4(%esp)
08130a4c +0x5c:  lea    -0x14(%ebp),%eax
08130a4f +0x5f:  mov    %eax,(%esp)
08130a52 +0x62:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08130a57 +0x67:  movl   $0x1,0x4(%esp)
08130a5f +0x6f:  lea    -0x14(%ebp),%eax
08130a62 +0x72:  mov    %eax,(%esp)
08130a65 +0x75:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08130a6a +0x7a:  lea    -0x14(%ebp),%eax
08130a6d +0x7d:  mov    %eax,0x4(%esp)
08130a71 +0x81:  mov    0x8(%ebp),%eax
08130a74 +0x84:  mov    %eax,(%esp)
08130a77 +0x87:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08130a7c +0x8c:  jmp    08130a99 <+0xa9>
08130a7e +0x8e:  mov    %edx,%ebx
08130a80 +0x90:  mov    %eax,%esi
08130a82 +0x92:  lea    -0x14(%ebp),%eax
08130a85 +0x95:  mov    %eax,(%esp)
08130a88 +0x98:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130a8d +0x9d:  mov    %esi,%eax
08130a8f +0x9f:  mov    %ebx,%edx
08130a91 +0xa1:  mov    %eax,(%esp)
08130a94 +0xa4:  call   08ae3750 <_Unwind_Resume>
08130a99 +0xa9:  lea    -0x14(%ebp),%eax
08130a9c +0xac:  mov    %eax,(%esp)
08130a9f +0xaf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130aa4 +0xb4:  jmp    08130aaa <+0xba>
08130aa6 +0xb6:  nop
08130aa7 +0xb7:  jmp    08130aaa <+0xba>
08130aa9 +0xb9:  nop
08130aaa +0xba:  add    $0x20,%esp
08130aad +0xbd:  pop    %ebx
08130aae +0xbe:  pop    %esi
08130aaf +0xbf:  pop    %ebp
08130ab0 +0xc0:  ret
08130ab1 +0xc1:  nop
```

## 反编译 C

```c
// advancealtar::Manager::procErrorSelectStage @ 0x81309f0

/* advancealtar::Manager::procErrorSelectStage(CUser*, ENUM_ERROR) */

void advancealtar::Manager::procErrorSelectStage(CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  if ((param_1 != (CUser *)0x0) && (param_2 != 0)) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08130a2d to 08130a7b has its CatchHandler @ 08130a7e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
