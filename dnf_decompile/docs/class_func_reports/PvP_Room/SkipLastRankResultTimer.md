# SkipLastRankResultTimer

`_ZN8PvP_Room23SkipLastRankResultTimerEv`

`PvP_Room::SkipLastRankResultTimer()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dcaba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dcaba  _ZN8PvP_Room23SkipLastRankResultTimerEv
#           PvP_Room::SkipLastRankResultTimer()
# range [0x085dcaba, 0x085dcad5]
085dcaba +0x00:  push   %ebp
085dcabb +0x01:  mov    %esp,%ebp
085dcabd +0x03:  sub    $0x18,%esp
085dcac0 +0x06:  movl   $0x32,0x4(%esp)
085dcac8 +0x0e:  mov    0x8(%ebp),%eax
085dcacb +0x11:  mov    %eax,(%esp)
085dcace +0x14:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085dcad3 +0x19:  leave
085dcad4 +0x1a:  ret
085dcad5 +0x1b:  nop
```

## 反编译 C

```c
// PvP_Room::SkipLastRankResultTimer @ 0x85dcaba

/* PvP_Room::SkipLastRankResultTimer() */

void __thiscall PvP_Room::SkipLastRankResultTimer(PvP_Room *this)

{
  gen_timer_key(this,0x32);
  return;
}
```
