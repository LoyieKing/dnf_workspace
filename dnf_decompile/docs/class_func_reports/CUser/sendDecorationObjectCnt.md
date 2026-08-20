# sendDecorationObjectCnt

`_ZN5CUser23sendDecorationObjectCntEs`

`CUser::sendDecorationObjectCnt(short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690d9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690d9a  _ZN5CUser23sendDecorationObjectCntEs
#           CUser::sendDecorationObjectCnt(short)
# range [0x08690d9a, 0x08690e35]
08690d9a +0x00:  push   %ebp
08690d9b +0x01:  mov    %esp,%ebp
08690d9d +0x03:  push   %esi
08690d9e +0x04:  push   %ebx
08690d9f +0x05:  sub    $0x30,%esp
08690da2 +0x08:  mov    0xc(%ebp),%eax
08690da5 +0x0b:  mov    %ax,-0x1c(%ebp)
08690da9 +0x0f:  lea    -0x14(%ebp),%eax
08690dac +0x12:  mov    %eax,(%esp)
08690daf +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08690db4 +0x1a:  movl   $0x1ac,0x8(%esp)
08690dbc +0x22:  movl   $0x0,0x4(%esp)
08690dc4 +0x2a:  lea    -0x14(%ebp),%eax
08690dc7 +0x2d:  mov    %eax,(%esp)
08690dca +0x30:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08690dcf +0x35:  movswl -0x1c(%ebp),%eax
08690dd3 +0x39:  mov    %eax,0x4(%esp)
08690dd7 +0x3d:  lea    -0x14(%ebp),%eax
08690dda +0x40:  mov    %eax,(%esp)
08690ddd +0x43:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08690de2 +0x48:  movl   $0x1,0x4(%esp)
08690dea +0x50:  lea    -0x14(%ebp),%eax
08690ded +0x53:  mov    %eax,(%esp)
08690df0 +0x56:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08690df5 +0x5b:  lea    -0x14(%ebp),%eax
08690df8 +0x5e:  mov    %eax,0x4(%esp)
08690dfc +0x62:  mov    0x8(%ebp),%eax
08690dff +0x65:  mov    %eax,(%esp)
08690e02 +0x68:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08690e07 +0x6d:  jmp    08690e24 <+0x8a>
08690e09 +0x6f:  mov    %edx,%ebx
08690e0b +0x71:  mov    %eax,%esi
08690e0d +0x73:  lea    -0x14(%ebp),%eax
08690e10 +0x76:  mov    %eax,(%esp)
08690e13 +0x79:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08690e18 +0x7e:  mov    %esi,%eax
08690e1a +0x80:  mov    %ebx,%edx
08690e1c +0x82:  mov    %eax,(%esp)
08690e1f +0x85:  call   08ae3750 <_Unwind_Resume>
08690e24 +0x8a:  lea    -0x14(%ebp),%eax
08690e27 +0x8d:  mov    %eax,(%esp)
08690e2a +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08690e2f +0x95:  add    $0x30,%esp
08690e32 +0x98:  pop    %ebx
08690e33 +0x99:  pop    %esi
08690e34 +0x9a:  pop    %ebp
08690e35 +0x9b:  ret
```

## 反编译 C

```c
// CUser::sendDecorationObjectCnt @ 0x8690d9a

/* CUser::sendDecorationObjectCnt(short) */

void __thiscall CUser::sendDecorationObjectCnt(CUser *this,short param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08690dca to 08690e06 has its CatchHandler @ 08690e09 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1ac);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
