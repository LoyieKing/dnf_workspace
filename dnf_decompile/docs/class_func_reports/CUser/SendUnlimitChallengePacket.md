# SendUnlimitChallengePacket

`_ZN5CUser26SendUnlimitChallengePacketEv`

`CUser::SendUnlimitChallengePacket()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08686f58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686f58  _ZN5CUser26SendUnlimitChallengePacketEv
#           CUser::SendUnlimitChallengePacket()
# range [0x08686f58, 0x08686fed]
08686f58 +0x00:  push   %ebp
08686f59 +0x01:  mov    %esp,%ebp
08686f5b +0x03:  push   %esi
08686f5c +0x04:  push   %ebx
08686f5d +0x05:  sub    $0x20,%esp
08686f60 +0x08:  lea    -0x14(%ebp),%eax
08686f63 +0x0b:  mov    %eax,(%esp)
08686f66 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08686f6b +0x13:  movl   $0xa4,0x8(%esp)
08686f73 +0x1b:  movl   $0x0,0x4(%esp)
08686f7b +0x23:  lea    -0x14(%ebp),%eax
08686f7e +0x26:  mov    %eax,(%esp)
08686f81 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08686f86 +0x2e:  movl   $0x1,0x4(%esp)
08686f8e +0x36:  lea    -0x14(%ebp),%eax
08686f91 +0x39:  mov    %eax,(%esp)
08686f94 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08686f99 +0x41:  movl   $0x1,0x4(%esp)
08686fa1 +0x49:  lea    -0x14(%ebp),%eax
08686fa4 +0x4c:  mov    %eax,(%esp)
08686fa7 +0x4f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08686fac +0x54:  lea    -0x14(%ebp),%eax
08686faf +0x57:  mov    %eax,0x4(%esp)
08686fb3 +0x5b:  mov    0x8(%ebp),%eax
08686fb6 +0x5e:  mov    %eax,(%esp)
08686fb9 +0x61:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08686fbe +0x66:  jmp    08686fdb <+0x83>
08686fc0 +0x68:  mov    %edx,%ebx
08686fc2 +0x6a:  mov    %eax,%esi
08686fc4 +0x6c:  lea    -0x14(%ebp),%eax
08686fc7 +0x6f:  mov    %eax,(%esp)
08686fca +0x72:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08686fcf +0x77:  mov    %esi,%eax
08686fd1 +0x79:  mov    %ebx,%edx
08686fd3 +0x7b:  mov    %eax,(%esp)
08686fd6 +0x7e:  call   08ae3750 <_Unwind_Resume>
08686fdb +0x83:  lea    -0x14(%ebp),%eax
08686fde +0x86:  mov    %eax,(%esp)
08686fe1 +0x89:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08686fe6 +0x8e:  add    $0x20,%esp
08686fe9 +0x91:  pop    %ebx
08686fea +0x92:  pop    %esi
08686feb +0x93:  pop    %ebp
08686fec +0x94:  ret
08686fed +0x95:  nop
```

## 反编译 C

```c
// CUser::SendUnlimitChallengePacket @ 0x8686f58

/* CUser::SendUnlimitChallengePacket() */

void __thiscall CUser::SendUnlimitChallengePacket(CUser *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08686f81 to 08686fbd has its CatchHandler @ 08686fc0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xa4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
