# send_alert

`_ZN17Inter_HadesAction10send_alertEP5CUserj`

`Inter_HadesAction::send_alert(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `Inter_HadesAction` | `0x084e5e62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e5e62  _ZN17Inter_HadesAction10send_alertEP5CUserj
#           Inter_HadesAction::send_alert(CUser*, unsigned int)
# range [0x084e5e62, 0x084e5f01]
084e5e62 +0x00:  push   %ebp
084e5e63 +0x01:  mov    %esp,%ebp
084e5e65 +0x03:  push   %esi
084e5e66 +0x04:  push   %ebx
084e5e67 +0x05:  sub    $0x20,%esp
084e5e6a +0x08:  lea    -0x14(%ebp),%eax
084e5e6d +0x0b:  mov    %eax,(%esp)
084e5e70 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e5e75 +0x13:  lea    -0x14(%ebp),%eax
084e5e78 +0x16:  mov    %eax,(%esp)
084e5e7b +0x19:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084e5e80 +0x1e:  movl   $0x1bf,0x8(%esp)
084e5e88 +0x26:  movl   $0x0,0x4(%esp)
084e5e90 +0x2e:  lea    -0x14(%ebp),%eax
084e5e93 +0x31:  mov    %eax,(%esp)
084e5e96 +0x34:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e5e9b +0x39:  mov    0x10(%ebp),%eax
084e5e9e +0x3c:  mov    %eax,0x4(%esp)
084e5ea2 +0x40:  lea    -0x14(%ebp),%eax
084e5ea5 +0x43:  mov    %eax,(%esp)
084e5ea8 +0x46:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5ead +0x4b:  movl   $0x1,0x4(%esp)
084e5eb5 +0x53:  lea    -0x14(%ebp),%eax
084e5eb8 +0x56:  mov    %eax,(%esp)
084e5ebb +0x59:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e5ec0 +0x5e:  lea    -0x14(%ebp),%eax
084e5ec3 +0x61:  mov    %eax,0x4(%esp)
084e5ec7 +0x65:  mov    0xc(%ebp),%eax
084e5eca +0x68:  mov    %eax,(%esp)
084e5ecd +0x6b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e5ed2 +0x70:  jmp    084e5eef <+0x8d>
084e5ed4 +0x72:  mov    %edx,%ebx
084e5ed6 +0x74:  mov    %eax,%esi
084e5ed8 +0x76:  lea    -0x14(%ebp),%eax
084e5edb +0x79:  mov    %eax,(%esp)
084e5ede +0x7c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5ee3 +0x81:  mov    %esi,%eax
084e5ee5 +0x83:  mov    %ebx,%edx
084e5ee7 +0x85:  mov    %eax,(%esp)
084e5eea +0x88:  call   08ae3750 <_Unwind_Resume>
084e5eef +0x8d:  lea    -0x14(%ebp),%eax
084e5ef2 +0x90:  mov    %eax,(%esp)
084e5ef5 +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5efa +0x98:  add    $0x20,%esp
084e5efd +0x9b:  pop    %ebx
084e5efe +0x9c:  pop    %esi
084e5eff +0x9d:  pop    %ebp
084e5f00 +0x9e:  ret
084e5f01 +0x9f:  nop
```

## 反编译 C

```c
// Inter_HadesAction::send_alert @ 0x84e5e62

/* Inter_HadesAction::send_alert(CUser*, unsigned int) */

void __thiscall Inter_HadesAction::send_alert(Inter_HadesAction *this,CUser *param_1,uint param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084e5e7b to 084e5ed1 has its CatchHandler @ 084e5ed4 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1bf);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
