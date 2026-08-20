# sendBlueMarbleEnterCount

`_ZN5CUser24sendBlueMarbleEnterCountEv`

`CUser::sendBlueMarbleEnterCount()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690fcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690fcc  _ZN5CUser24sendBlueMarbleEnterCountEv
#           CUser::sendBlueMarbleEnterCount()
# range [0x08690fcc, 0x0869106b]
08690fcc +0x00:  push   %ebp
08690fcd +0x01:  mov    %esp,%ebp
08690fcf +0x03:  push   %esi
08690fd0 +0x04:  push   %ebx
08690fd1 +0x05:  sub    $0x20,%esp
08690fd4 +0x08:  lea    -0x14(%ebp),%eax
08690fd7 +0x0b:  mov    %eax,(%esp)
08690fda +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08690fdf +0x13:  movl   $0x1b4,0x8(%esp)
08690fe7 +0x1b:  movl   $0x0,0x4(%esp)
08690fef +0x23:  lea    -0x14(%ebp),%eax
08690ff2 +0x26:  mov    %eax,(%esp)
08690ff5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08690ffa +0x2e:  mov    0x8(%ebp),%eax
08690ffd +0x31:  mov    %eax,(%esp)
08691000 +0x34:  call   08690f42 <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv>  ; CUserCharacInfo::getBlueMarbleEnterCount() const
08691005 +0x39:  movzbl %al,%eax
08691008 +0x3c:  mov    %eax,0x4(%esp)
0869100c +0x40:  lea    -0x14(%ebp),%eax
0869100f +0x43:  mov    %eax,(%esp)
08691012 +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08691017 +0x4b:  movl   $0x1,0x4(%esp)
0869101f +0x53:  lea    -0x14(%ebp),%eax
08691022 +0x56:  mov    %eax,(%esp)
08691025 +0x59:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0869102a +0x5e:  lea    -0x14(%ebp),%eax
0869102d +0x61:  mov    %eax,0x4(%esp)
08691031 +0x65:  mov    0x8(%ebp),%eax
08691034 +0x68:  mov    %eax,(%esp)
08691037 +0x6b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0869103c +0x70:  jmp    08691059 <+0x8d>
0869103e +0x72:  mov    %edx,%ebx
08691040 +0x74:  mov    %eax,%esi
08691042 +0x76:  lea    -0x14(%ebp),%eax
08691045 +0x79:  mov    %eax,(%esp)
08691048 +0x7c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0869104d +0x81:  mov    %esi,%eax
0869104f +0x83:  mov    %ebx,%edx
08691051 +0x85:  mov    %eax,(%esp)
08691054 +0x88:  call   08ae3750 <_Unwind_Resume>
08691059 +0x8d:  lea    -0x14(%ebp),%eax
0869105c +0x90:  mov    %eax,(%esp)
0869105f +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691064 +0x98:  add    $0x20,%esp
08691067 +0x9b:  pop    %ebx
08691068 +0x9c:  pop    %esi
08691069 +0x9d:  pop    %ebp
0869106a +0x9e:  ret
0869106b +0x9f:  nop
```

## 反编译 C

```c
// CUser::sendBlueMarbleEnterCount @ 0x8690fcc

/* CUser::sendBlueMarbleEnterCount() */

void __thiscall CUser::sendBlueMarbleEnterCount(CUser *this)

{
  uint uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08690ff5 to 0869103b has its CatchHandler @ 0869103e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b4);
  uVar1 = CUserCharacInfo::getBlueMarbleEnterCount((CUserCharacInfo *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
