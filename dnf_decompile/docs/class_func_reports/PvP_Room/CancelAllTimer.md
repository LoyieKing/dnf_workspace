# CancelAllTimer

`_ZN8PvP_Room14CancelAllTimerEv`

`PvP_Room::CancelAllTimer()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dcad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dcad6  _ZN8PvP_Room14CancelAllTimerEv
#           PvP_Room::CancelAllTimer()
# range [0x085dcad6, 0x085dcaf1]
085dcad6 +0x00:  push   %ebp
085dcad7 +0x01:  mov    %esp,%ebp
085dcad9 +0x03:  sub    $0x18,%esp
085dcadc +0x06:  movl   $0x32,0x4(%esp)
085dcae4 +0x0e:  mov    0x8(%ebp),%eax
085dcae7 +0x11:  mov    %eax,(%esp)
085dcaea +0x14:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085dcaef +0x19:  leave
085dcaf0 +0x1a:  ret
085dcaf1 +0x1b:  nop
```

## 反编译 C

```c
// PvP_Room::CancelAllTimer @ 0x85dcad6

/* PvP_Room::CancelAllTimer() */

void __thiscall PvP_Room::CancelAllTimer(PvP_Room *this)

{
  gen_timer_key(this,0x32);
  return;
}
```
