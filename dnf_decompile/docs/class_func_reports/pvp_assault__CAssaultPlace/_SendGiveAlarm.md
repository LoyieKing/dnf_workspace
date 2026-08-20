# _SendGiveAlarm

`_ZN11pvp_assault13CAssaultPlace14_SendGiveAlarmEv`

`pvp_assault::CAssaultPlace::_SendGiveAlarm()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7ac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7ac4  _ZN11pvp_assault13CAssaultPlace14_SendGiveAlarmEv
#           pvp_assault::CAssaultPlace::_SendGiveAlarm()
# range [0x082e7ac4, 0x082e7b29]
082e7ac4 +0x00:  push   %ebp
082e7ac5 +0x01:  mov    %esp,%ebp
082e7ac7 +0x03:  push   %esi
082e7ac8 +0x04:  push   %ebx
082e7ac9 +0x05:  sub    $0x20,%esp
082e7acc +0x08:  lea    -0x14(%ebp),%eax
082e7acf +0x0b:  mov    %eax,(%esp)
082e7ad2 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e7ad7 +0x13:  lea    -0x14(%ebp),%eax
082e7ada +0x16:  mov    %eax,0x4(%esp)
082e7ade +0x1a:  mov    0x8(%ebp),%eax
082e7ae1 +0x1d:  mov    %eax,(%esp)
082e7ae4 +0x20:  call   082e910c <_ZN11pvp_assault13CAssaultPlace14_MakeGiveAlarmEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeGiveAlarm(PacketGuard*)
082e7ae9 +0x25:  lea    -0x14(%ebp),%eax
082e7aec +0x28:  mov    %eax,0x4(%esp)
082e7af0 +0x2c:  mov    0x8(%ebp),%eax
082e7af3 +0x2f:  mov    %eax,(%esp)
082e7af6 +0x32:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082e7afb +0x37:  jmp    082e7b18 <+0x54>
082e7afd +0x39:  mov    %edx,%ebx
082e7aff +0x3b:  mov    %eax,%esi
082e7b01 +0x3d:  lea    -0x14(%ebp),%eax
082e7b04 +0x40:  mov    %eax,(%esp)
082e7b07 +0x43:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7b0c +0x48:  mov    %esi,%eax
082e7b0e +0x4a:  mov    %ebx,%edx
082e7b10 +0x4c:  mov    %eax,(%esp)
082e7b13 +0x4f:  call   08ae3750 <_Unwind_Resume>
082e7b18 +0x54:  lea    -0x14(%ebp),%eax
082e7b1b +0x57:  mov    %eax,(%esp)
082e7b1e +0x5a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7b23 +0x5f:  add    $0x20,%esp
082e7b26 +0x62:  pop    %ebx
082e7b27 +0x63:  pop    %esi
082e7b28 +0x64:  pop    %ebp
082e7b29 +0x65:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendGiveAlarm @ 0x82e7ac4

/* pvp_assault::CAssaultPlace::_SendGiveAlarm() */

void __thiscall pvp_assault::CAssaultPlace::_SendGiveAlarm(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7ae4 to 082e7afa has its CatchHandler @ 082e7afd */
  _MakeGiveAlarm(this,local_18);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
