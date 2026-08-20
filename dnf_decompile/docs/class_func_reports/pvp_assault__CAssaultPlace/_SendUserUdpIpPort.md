# _SendUserUdpIpPort

`_ZN11pvp_assault13CAssaultPlace18_SendUserUdpIpPortEv`

`pvp_assault::CAssaultPlace::_SendUserUdpIpPort()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7a5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7a5e  _ZN11pvp_assault13CAssaultPlace18_SendUserUdpIpPortEv
#           pvp_assault::CAssaultPlace::_SendUserUdpIpPort()
# range [0x082e7a5e, 0x082e7ac3]
082e7a5e +0x00:  push   %ebp
082e7a5f +0x01:  mov    %esp,%ebp
082e7a61 +0x03:  push   %esi
082e7a62 +0x04:  push   %ebx
082e7a63 +0x05:  sub    $0x20,%esp
082e7a66 +0x08:  lea    -0x14(%ebp),%eax
082e7a69 +0x0b:  mov    %eax,(%esp)
082e7a6c +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e7a71 +0x13:  lea    -0x14(%ebp),%eax
082e7a74 +0x16:  mov    %eax,0x4(%esp)
082e7a78 +0x1a:  mov    0x8(%ebp),%eax
082e7a7b +0x1d:  mov    %eax,(%esp)
082e7a7e +0x20:  call   082e8de2 <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(PacketGuard*)
082e7a83 +0x25:  lea    -0x14(%ebp),%eax
082e7a86 +0x28:  mov    %eax,0x4(%esp)
082e7a8a +0x2c:  mov    0x8(%ebp),%eax
082e7a8d +0x2f:  mov    %eax,(%esp)
082e7a90 +0x32:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082e7a95 +0x37:  jmp    082e7ab2 <+0x54>
082e7a97 +0x39:  mov    %edx,%ebx
082e7a99 +0x3b:  mov    %eax,%esi
082e7a9b +0x3d:  lea    -0x14(%ebp),%eax
082e7a9e +0x40:  mov    %eax,(%esp)
082e7aa1 +0x43:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7aa6 +0x48:  mov    %esi,%eax
082e7aa8 +0x4a:  mov    %ebx,%edx
082e7aaa +0x4c:  mov    %eax,(%esp)
082e7aad +0x4f:  call   08ae3750 <_Unwind_Resume>
082e7ab2 +0x54:  lea    -0x14(%ebp),%eax
082e7ab5 +0x57:  mov    %eax,(%esp)
082e7ab8 +0x5a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7abd +0x5f:  add    $0x20,%esp
082e7ac0 +0x62:  pop    %ebx
082e7ac1 +0x63:  pop    %esi
082e7ac2 +0x64:  pop    %ebp
082e7ac3 +0x65:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendUserUdpIpPort @ 0x82e7a5e

/* pvp_assault::CAssaultPlace::_SendUserUdpIpPort() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserUdpIpPort(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7a7e to 082e7a94 has its CatchHandler @ 082e7a97 */
  _MakeUserUdpIpPort(this,local_18);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
