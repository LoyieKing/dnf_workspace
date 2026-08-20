# SendZeroExpPacket

`_ZN5CUser17SendZeroExpPacketEv`

`CUser::SendZeroExpPacket()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b9da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b9da  _ZN5CUser17SendZeroExpPacketEv
#           CUser::SendZeroExpPacket()
# range [0x0867b9da, 0x0867ba5b]
0867b9da +0x00:  push   %ebp
0867b9db +0x01:  mov    %esp,%ebp
0867b9dd +0x03:  push   %esi
0867b9de +0x04:  push   %ebx
0867b9df +0x05:  sub    $0x20,%esp
0867b9e2 +0x08:  lea    -0x14(%ebp),%eax
0867b9e5 +0x0b:  mov    %eax,(%esp)
0867b9e8 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867b9ed +0x13:  movl   $0x107,0x8(%esp)
0867b9f5 +0x1b:  movl   $0x0,0x4(%esp)
0867b9fd +0x23:  lea    -0x14(%ebp),%eax
0867ba00 +0x26:  mov    %eax,(%esp)
0867ba03 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867ba08 +0x2e:  movl   $0x1,0x4(%esp)
0867ba10 +0x36:  lea    -0x14(%ebp),%eax
0867ba13 +0x39:  mov    %eax,(%esp)
0867ba16 +0x3c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867ba1b +0x41:  lea    -0x14(%ebp),%eax
0867ba1e +0x44:  mov    %eax,0x4(%esp)
0867ba22 +0x48:  mov    0x8(%ebp),%eax
0867ba25 +0x4b:  mov    %eax,(%esp)
0867ba28 +0x4e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867ba2d +0x53:  jmp    0867ba4a <+0x70>
0867ba2f +0x55:  mov    %edx,%ebx
0867ba31 +0x57:  mov    %eax,%esi
0867ba33 +0x59:  lea    -0x14(%ebp),%eax
0867ba36 +0x5c:  mov    %eax,(%esp)
0867ba39 +0x5f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867ba3e +0x64:  mov    %esi,%eax
0867ba40 +0x66:  mov    %ebx,%edx
0867ba42 +0x68:  mov    %eax,(%esp)
0867ba45 +0x6b:  call   08ae3750 <_Unwind_Resume>
0867ba4a +0x70:  lea    -0x14(%ebp),%eax
0867ba4d +0x73:  mov    %eax,(%esp)
0867ba50 +0x76:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867ba55 +0x7b:  add    $0x20,%esp
0867ba58 +0x7e:  pop    %ebx
0867ba59 +0x7f:  pop    %esi
0867ba5a +0x80:  pop    %ebp
0867ba5b +0x81:  ret
```

## 反编译 C

```c
// CUser::SendZeroExpPacket @ 0x867b9da

/* CUser::SendZeroExpPacket() */

void __thiscall CUser::SendZeroExpPacket(CUser *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867ba03 to 0867ba2c has its CatchHandler @ 0867ba2f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x107);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
