# ~PvP_GuildWar_Log

`_ZN16PvP_GuildWar_LogD1Ev`

`PvP_GuildWar_Log::~PvP_GuildWar_Log()`

| 类 | 地址 |
|---|---|
| `PvP_GuildWar_Log` | `0x085dda86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dda86  _ZN16PvP_GuildWar_LogD1Ev
#           PvP_GuildWar_Log::~PvP_GuildWar_Log()
# range [0x085dda86, 0x085dda99]
085dda86 +0x00:  push   %ebp
085dda87 +0x01:  mov    %esp,%ebp
085dda89 +0x03:  sub    $0x18,%esp
085dda8c +0x06:  mov    0x8(%ebp),%eax
085dda8f +0x09:  mov    %eax,(%esp)
085dda92 +0x0c:  call   085dda9a <_ZN16PvP_GuildWar_Log5ClearEv>  ; PvP_GuildWar_Log::Clear()
085dda97 +0x11:  leave
085dda98 +0x12:  ret
085dda99 +0x13:  nop
```

## 反编译 C

```c
// PvP_GuildWar_Log::~PvP_GuildWar_Log @ 0x85dda86

/* PvP_GuildWar_Log::~PvP_GuildWar_Log() */

void __thiscall PvP_GuildWar_Log::~PvP_GuildWar_Log(PvP_GuildWar_Log *this)

{
  Clear(this);
  return;
}
```
