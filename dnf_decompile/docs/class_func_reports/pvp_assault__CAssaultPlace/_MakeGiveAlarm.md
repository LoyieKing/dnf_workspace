# _MakeGiveAlarm

`_ZN11pvp_assault13CAssaultPlace14_MakeGiveAlarmEP11PacketGuard`

`pvp_assault::CAssaultPlace::_MakeGiveAlarm(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e910c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e910c  _ZN11pvp_assault13CAssaultPlace14_MakeGiveAlarmEP11PacketGuard
#           pvp_assault::CAssaultPlace::_MakeGiveAlarm(PacketGuard*)
# range [0x082e910c, 0x082e9141]
082e910c +0x00:  push   %ebp
082e910d +0x01:  mov    %esp,%ebp
082e910f +0x03:  sub    $0x18,%esp
082e9112 +0x06:  mov    0xc(%ebp),%eax
082e9115 +0x09:  movl   $0x8b,0x8(%esp)
082e911d +0x11:  movl   $0x0,0x4(%esp)
082e9125 +0x19:  mov    %eax,(%esp)
082e9128 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e912d +0x21:  mov    0xc(%ebp),%eax
082e9130 +0x24:  movl   $0x1,0x4(%esp)
082e9138 +0x2c:  mov    %eax,(%esp)
082e913b +0x2f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e9140 +0x34:  leave
082e9141 +0x35:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeGiveAlarm @ 0x82e910c

/* pvp_assault::CAssaultPlace::_MakeGiveAlarm(PacketGuard*) */

void __thiscall pvp_assault::CAssaultPlace::_MakeGiveAlarm(CAssaultPlace *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x8b);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
